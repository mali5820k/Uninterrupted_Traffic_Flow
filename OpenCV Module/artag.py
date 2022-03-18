import string
import cv2
import cv2.aruco as aruco
import numpy as np
import os
import time

# DO NOT CHANGE THESE TWO PARAMETERS UNLESS THE WHOLE SYSTEM RELIES ON DIFFERENT ArUco TAG DIMENSIONS!!!!
markerSize = 6 # Default 6
totalMarkers = 250 # Default 250
debug = True # Enable or disable the drawing of boxes around detected ArUco tags


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
    
    for i in range(0, len(ids)):
        positionDict[ids[i]] = centers[i]
    
    return positionDict

# Feel free to change the parameters in the function to fit your approach
# Function needs to draw a box around the tags that were detected.
def debugViewOfDetectedTags(img, corners, centers, ids):
    if debug == False:
        return
    
    ### For debugging in more detail, uncomment or comment the below print statements
    print(f"\n_________________________________________________________________________")
    print(f"\nMarker ID is: {ids}")
    print(f"\nThe length of the corners array is: {len(corners)}\n")
    print(f"Corners Array is: {corners}")
    print(f"Center of Tags are: {centers}\n")
    print(f"Tag Positions: {tagPositions}")
    print(f"\n_________________________________________________________________________")
    
    # Do the display logic here:
    #cv2.rectangle(img, (int(corners[0][0]), int(corners[0][1])), (int(corners[2][0]), int(corners[2][1])), (50, 50, 255), 2)
    #cv2.line(img, (int(centers[0]), int(centers[1])), (int(centers[0]), int(centers[1])), (200, 0, 200), 6)


# For the combined implementation, encapsulate this entire region below within a function call and
# eliminate the while-loop so the actions only occur once per function call.

cap = cv2.VideoCapture(0)

while True:
    try:
        success, img = cap.read()
        grayScale=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
        key=getattr(aruco, f'DICT_{markerSize}X{markerSize}_{totalMarkers}')
        arucoDict=aruco.Dictionary_get(key)
        arucoParam=aruco.DetectorParameters_create()
        corners,ids,rejected=aruco.detectMarkers(grayScale,arucoDict, parameters=arucoParam)
        centers = []

        #ids type is numpy.ndarray
        #NEED TO HAVE ARTAGS ON CAMERA, IF NOT, PROGRAM CRASHES
        #temp=ids.tolist()
        
        temp = np.array(ids)
        temp = temp.flatten()
        corners = np.array(corners)
        corners = corners.flatten()
        corners = cornersTo2D(corners)
        corners = cornersReformatted(corners)
        centers = getCenters(corners)
        tagPositions = makePositionDict(centers, temp)
        
        # This function will draw the boxes around each detected ArUco tag
        debugViewOfDetectedTags(img, corners, centers, temp)
        
        cv2.imshow("Image", img)
        cv2.waitKey(1)
        
    except KeyboardInterrupt:
        print("Quitting Program")
        cap.release() # Release the capture stream
        cv2.destroyAllWindows() # Close all windows that were created from this program and openCV.
        break
    # Comment the below exception out if trying to find source of error
    except:
        print("No tags in camera detection view!\n")
        continue
        