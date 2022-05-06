import string
import cv2
import cv2.aruco as aruco
import numpy as np
import os
import time
import moduleToServer as ms
import json
import imutils
from threading import Thread
import datetime
import sys

# Camera settings
#CAMERA_ID = "/media/alex/NIKON D5200/DCIM/102ALEX1/DSC_0652.MOV"
#CAMERA_ID = 0  # Default Camera
CAMERA_ID = 14 # USB-Video
CAMERA_WIDTH = 1920
CAMERA_HEIGHT = 1080
CAMERA_FPS = 30

# DO NOT CHANGE THESE TWO PARAMETERS UNLESS THE WHOLE SYSTEM RELIES ON DIFFERENT ArUco TAG DIMENSIONS!!!!
markerSize = 4 # Default 6
totalMarkers = 250 # Default 250
debug = True # Enable or disable the drawing of boxes around detected ArUco tags
lastPositions = {}
velocities = {}
startTime = 0
endTime = 0
elapsedTime = 0
usingVideoFile = False

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
    bottomLeft = tagCorners[3]

    centerX = (topLeft[0] + topRight[0] + bottomRight[0] + bottomLeft[0])/4
    centerY = (topLeft[1] + topRight[1] + bottomRight[1] + bottomLeft[1])/4

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
def debugViewOfDetectedTags(img, unformatted_corners, corners, centers, tagPositions, ids, fps):
    if debug == False:
        return

    ### For debugging in more detail, uncomment or comment the below print statements
    print(f"\n_________________________________________________________________________")
    print(f"\nMarker ID is: {ids}")
    print(f"\nThe length of the corners array is: {len(corners)}\n")
    print(f"Corners Array is: {corners}")
    print(f"Center of Tags are: {centers}\n")
    print(f"Tag Positions: {tagPositions}")
    if not usingVideoFile:
        print(f"FPS: {fps.fps():.2f}")
    print(f"\n_________________________________________________________________________")

    # Do the display logic here:
    color = (200, 0, 250)
    # Using this source: https://aliyasineser.medium.com/aruco-marker-tracking-with-opencv-8cb844c26628
    aruco.drawDetectedMarkers(img, unformatted_corners, borderColor = color)

# Both following classes from https://pyimagesearch.com/2015/12/21/increasing-webcam-fps-with-python-and-opencv/
class FPS:
    def __init__(self):
        self._start = None
        self._end = None
        self._numFrames = 0

    def start(self):
        self._start = datetime.datetime.now()
        return self

    def stop(self):
        self._end = datetime.datetime.now()

    def update(self):
        self._end = datetime.datetime.now()
        self._numFrames += 1

    def elapsed(self):
        return (self._end - self._start).total_seconds()

    def fps(self):
        curfps = self._numFrames / self.elapsed()
        self._start = datetime.datetime.now()
        self._numFrames = 0
        return curfps

class WebcamVideoStream:
    def __init__(self, src=CAMERA_ID):
        self.stream = cv2.VideoCapture(src)
        self.stream.set(3, CAMERA_WIDTH)
        self.stream.set(4, CAMERA_HEIGHT)
        self.stream.set(5, CAMERA_FPS)
        fourcc_cap = cv2.VideoWriter_fourcc(*'MJPG')
        self.stream.set(6, fourcc_cap)
        (self.grabbed, self.frame) = self.stream.read()
        self.stopped = False

    def start(self):
        Thread(target=self.update, args=()).start()
        return self

    def update(self):
        while True:
            if self.stopped:
                return

            (self.grabbed, self.frame) = self.stream.read()

    def read(self):
        return self.frame

    def stop(self):
        self.stopped = True
        self.stream.release()

# For the combined implementation, encapsulate this entire region below within a function call and
# eliminate the while-loop so the actions only occur once per function call.
def main():
    global velocities
    global lastPositions
    global startTime, endTime
    global carData
    global usingVideoFile

    vs = None
    fps = None

    # If reading from file
    if isinstance(CAMERA_ID, str):
    ## Initialize capture stream and apply settings from above
        print("Detected video file from CAMERA_ID")
        usingVideoFile = True
        vs = cv2.VideoCapture(CAMERA_ID)
        vs.set(3, CAMERA_WIDTH)
        vs.set(4, CAMERA_HEIGHT)
        vs.set(5, CAMERA_FPS)

    # Initialize video stream
    elif isinstance(CAMERA_ID, int):
        print("Detected webcam from CAMERA_ID")
        vs = WebcamVideoStream().start()
        fps = FPS().start()

    else:
        print(f'Type of CAMERA_ID not recognized ({type(CAMERA_ID)}, should be str or int)')
        sys.exit(1)

    # setup module to server connection
    ms.setup()

    while True:
        try:
            img = None
            if usingVideoFile:
                success, img = vs.read()
            else:
                img = vs.read()
                fps.update()

            #img = imutils.resize(img, width=400) # This is how you would resize the image if you wanted to
            grayScale=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY) # Convert to B&W for OpenCV
            key=getattr(aruco, f'DICT_{markerSize}X{markerSize}_{totalMarkers}')
            arucoDict=aruco.Dictionary_get(key)
            arucoParam=aruco.DetectorParameters_create()
            corners,ids,rejected=aruco.detectMarkers(grayScale,arucoDict, parameters=arucoParam)
            centers = []
            unformatted_corners = corners

            #ids type is numpy.ndarray
            temp = np.array(ids)
            temp = temp.flatten()

            rej_corners = np.array(rejected)
            print(f"The rejected tag values: {rej_corners}, ids: {temp}")

            corners = np.array(corners)
            corners = corners.flatten()
            corners = cornersTo2D(corners)
            corners = cornersReformatted(corners)
            centers = getCenters(corners)
            tagPositions = makePositionDict(centers, temp)
            startTime = time.time()

            lastPositions.update(tagPositions)
            endTime = time.time()

            # This function will draw the boxes around each detected ArUco tag
            debugViewOfDetectedTags(img, unformatted_corners, corners, centers, tagPositions, temp, fps)

            # Assemble car data
            for i in range(0, len(centers)):
                # Determine position of center, corners, and front
                position = centers[i]
                topLeftCorner = [int(corners[i][0][0]), int(corners[i][0][1])]
                topRightCorner = [int(corners[i][1][0]), int(corners[i][1][1])]
                # Average top left and right corners to determine the center point of the forward direction
                forwardPoint = [int((topLeftCorner[0] + topRightCorner[0])/2), int( (topLeftCorner[1] + topRightCorner[1])/2)]

                # Draw forward point and center position on view
                cv2.circle(img, (int(forwardPoint[0]), int(forwardPoint[1])), 6, (200, 0, 200), -1)
                cv2.circle(img, (int(position[0]), int(position[1])), 6, (0, 200, 200), -1)

                # Determine heading
                heading = 0
                absx = abs(forwardPoint[0] - position[0])
                absy = abs(forwardPoint[1] - position[1])
                if forwardPoint[0] == position[0]: # Same x
                    if forwardPoint[1] > position[1]: # pointing due south
                        heading = 180
                    else: # pointing straight north
                        heading = 0
                elif forwardPoint[1] == position[1]: # Same y
                    if forwardPoint[0] > position[0]: # pointing due east
                        heading = 90
                    else: # pointing due west
                        heading = 270

                elif forwardPoint[0] > position[0] and forwardPoint[1] < position[1]: # Quadrant 1
                    theta = np.arctan([absy/absx])[0] * 57.29578 # This literal converts to degrees
                    heading = 90 - theta
                elif forwardPoint[0] < position[0] and forwardPoint[1] < position[1]: # Quadrant 2
                    theta = np.arctan([absy/absx])[0] * 57.29578
                    heading = 270 + theta
                elif forwardPoint[0] < position[0] and forwardPoint[1] > position[1]: # Quadrant 3
                    theta = np.arctan([absy/absx])[0] * 57.29578
                    heading = 270 - theta
                elif forwardPoint[0] > position[0] and forwardPoint[1] > position[1]: # Quadrant 4
                    theta = np.arctan([absy/absx])[0] * 57.29578
                    heading = 90 + theta

                # Convert numpy int to string so that JSON doesn't complain
                cur_id = f"tag{str(temp[i])}"
                carData[cur_id] = {
                        "position": position,
                        "heading": heading
                        }

            # Display preview window
            cv2.imshow("Image", img)
            cv2.waitKey(1)

            # package data to send to the server:
            packaged_data = {
                    "carData": json.dumps(carData)
                    }

            # Send the data to the server:
            ms.sendCarLocalizationDataToServer(packaged_data)

        # Handle CTRL+C Keyboard Interrupt for exiting program
        except KeyboardInterrupt:
            print("Quitting Program")

            # Release video capture stream or stop video playback
            if usingVideoFile:
                vs.release()
            else:
                vs.stop()
                fps.stop()

            cv2.destroyAllWindows() # Close all windows that were created from this program and openCV.
            break

if __name__ == "__main__": main()
