import string
import cv2
import cv2.aruco as aruco
import numpy as np
import os
import time
import moduleToServer as ms

# DO NOT CHANGE THESE TWO PARAMETERS UNLESS THE WHOLE SYSTEM RELIES ON DIFFERENT ArUco TAG DIMENSIONS!!!!
markerSize = 6 # Default 6
totalMarkers = 250 # Default 250
debug = True # Enable or disable the drawing of boxes around detected ArUco tags
lastPositions = {}
velocities = {}
startTime = 0
endTime = 0
elapsedTime = 0

greenArrowData = {} # Starting and ending points of the vector, Velocity, and GUID (unique reference number to that green Arrow)
# carData = {1: ([0, 0], [0, 0])} # This is the format
carData = {} # position and velocity of cars with an associated GUID

# WORKS DON'T TOUCH
def cornersTo2D(corners):
    corners2D = []
    for i in range(1, len(corners), 2):
        corners2D.append([corners[i-1], corners[i]])
    return corners2D

def cornersReformatted(corners):
    # grab every 4 indices and store them into a list
    # store those lists under the ID for that tag
    cornersLen = int(len(corners))
    cornersFormatted = []
    
    for i in range(0, cornersLen, 4):
        cornersFormatted.append([corners[i], corners[i+1], corners[i+2], corners[i+3]])
    return cornersFormatted

def getCenter(tagCorners):
    # TagPos     : idx
    # TopLeft    : 0
    # TopRight   : 1
    # bottomRight: 2
    # bottomLeft : 3
    topLeft = tagCorners[0]
    topRight = tagCorners[1]
    bottomRight = tagCorners[2]
    
    centerX = (topLeft[0] + topRight[0])/2
    centerY = (bottomRight[1] - topRight[1])/2 + topRight[1]
    
    return [int(centerX), int(centerY)]

def getCenters(corners):
    centers = []
    for i in range(0, len(corners)):
        centers.append(getCenter(corners[i]))
    
    return centers

def makePositionDict(centers, ids):
    positionDict = {}
    if (len(centers) < 1):
        return {}
    for i in range(0, len(ids)):
        positionDict[ids[i]] = centers[i]
    
    return positionDict

# This function is broken
# def computeVelocities(lastPositions, positions):
#     global elapsedTime
#     velocitiesVector = {}
#     elapsedTime = abs(endTime - startTime)
#     x1, x2, y1, y2 = 0, 0, 0, 0

#     for key in positions:
#         if (key == None):
#             break
#         x2, y2 = positions.get(key)
#         x1, y1 = lastPositions.get(key)
#         velocitiesVector[key] = [[(x2 - x1)/elapsedTime], [(y2 - y1)/elapsedTime]]
    
#     return velocitiesVector

# Feel free to change the parameters in the function to fit your approach
# Function needs to draw a box around the tags that were detected.
def debugViewOfDetectedTags(img, unformatted_corners, corners, centers, tagPositions, ids):
    if debug == False:
        return
    
    ### For debugging in more detail, uncomment or comment the below print statements
    print(f"\n_________________________________________________________________________")
    print(f"\nMarker ID is: {ids}")
    print(f"\nThe length of the corners array is: {len(corners)}\n")
    print(f"Corners Array is: {corners}")
    print(f"Center of Tags are: {centers}\n")
    print(f"Tag Positions: {tagPositions}")
    print(f"Tag Velocities: {velocities}")
    print(f"\n_________________________________________________________________________")
    
    # Do the display logic here:
    #cv2.rectangle(img, (int(corners[0][0]), int(corners[0][1])), (int(corners[2][0]), int(corners[2][1])), (50, 50, 255), 2)
    #cv2.line(img, (int(centers[0]), int(centers[1])), (int(centers[0]), int(centers[1])), (200, 0, 200), 6)
    color = (200, 0, 250)
    # Using this source: https://aliyasineser.medium.com/aruco-marker-tracking-with-opencv-8cb844c26628
    aruco.drawDetectedMarkers(img, unformatted_corners, borderColor = color)
    

# For the combined implementation, encapsulate this entire region below within a function call and
# eliminate the while-loop so the actions only occur once per function call.
def main():
    global velocities
    global lastPositions
    global startTime, endTime
    global greenArrowData, carData
    cap = cv2.VideoCapture(0)

    # setup module to server connection
    ms.setup()

    while True:
        try:
            success, img = cap.read()
            grayScale=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
            key=getattr(aruco, f'DICT_{markerSize}X{markerSize}_{totalMarkers}')
            arucoDict=aruco.Dictionary_get(key)
            arucoParam=aruco.DetectorParameters_create()
            corners,ids,rejected=aruco.detectMarkers(grayScale,arucoDict, parameters=arucoParam)
            centers = []
            unformatted_corners = corners

            #ids type is numpy.ndarray
            #NEED TO HAVE ARTAGS ON CAMERA, IF NOT, PROGRAM CRASHES
            #temp=ids.tolist()
            temp = np.array(ids)
            temp = temp.flatten()
            rej_corners = np.array(rejected)
            #rej_corners.flatten()
            #rej_corners = cornersTo2D(rej_corners)
            #rej_corners = cornersReformatted(rej_corners)
            print(f"The rejected tag values: {rej_corners}, ids: {temp}")
            #if (len(rej_corners) != 0 and len(temp) != 0):
                #corners.append(rejected)

            corners = np.array(corners)
            corners = corners.flatten()
            corners = cornersTo2D(corners)
            corners = cornersReformatted(corners)
            centers = getCenters(corners)
            tagPositions = makePositionDict(centers, temp)
            startTime = time.time()
            
            # if (not(len(lastPositions) == 0)):
            #     velocities.update(computeVelocities(lastPositions, tagPositions))
            
            lastPositions.update(tagPositions)
            endTime = time.time()
            
            # This function will draw the boxes around each detected ArUco tag
            debugViewOfDetectedTags(img, unformatted_corners, corners, centers, tagPositions, temp)

            cv2.imshow("Image", img)
            cv2.waitKey(1)
            
            # Assembled car data
            for i in range(0, len(centers)):
                position = centers[i]
                cur_id = temp[i]
                carData[cur_id] = position

            # Assemble greenArrowData here when it's ready:
            #.....#

            # package data to send to the server:
            packaged_data = (greenArrowData, carData)

            # Send the data to the server:
            ms.sendCarLocalizationDataToServer(packaged_data)

            
        except KeyboardInterrupt:
            print("Quitting Program")
            cap.release() # Release the capture stream
            cv2.destroyAllWindows() # Close all windows that were created from this program and openCV.
            break
            
if __name__ == "__main__": main()