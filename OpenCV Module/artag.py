import cv2
import cv2.aruco as aruco
import numpy as np
import os
import time
markerSize=6
totalMarkers=250
draw=True
counter=0
x=[]

# WORKS DON'T TOUCH
def cornersTo2D(corners):
    corners2D = []
    for i in range(1, len(corners), 2):
        corners2D.append([corners[i-1], corners[i]])
    return corners2D

def getCenter(tagCorners):
    # TagPos     : idx
    # TopLeft    : 0
    # TopRight   : 1
    # bottomRight: 2
    # bottomLeft : 3
    # topRight - topLeft => centerX
    # topRight - bottomRight => centerY
    topLeft = tagCorners[0]
    topRight = tagCorners[1]
    bottomRight = tagCorners[2]
    #bottomLeft = tagCorners[3]
    
    centerX = (topLeft[0] + topRight[0])/2
    centerY = (bottomRight[1] - topRight[1])/2 + topRight[1]
    
    return [centerX, centerY]

def getTagByID(id, corners):
    pass

cap=cv2.VideoCapture(0)
while True:
    try:
        success, img =cap.read()
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
        print(corners)
        corners = cornersTo2D(corners)
        
        print(f"Marker ID is: {temp}")
        print(f"\nThe length of the corners array is: {len(corners)}\n")
        print(f"Corner Array is: {corners}")
        centers = getCenter(corners)
        print(f"Center of Tag is: {centers}")
        cv2.rectangle(img, (int(corners[0][0]), int(corners[0][1])), (int(corners[2][0]), int(corners[2][1])), (50, 50, 255), 2)
        cv2.line(img, (int(centers[0]), int(centers[1])), (int(centers[0]), int(centers[1])), (200, 0, 200), 6)
        cv2.imshow("Image", img)
        cv2.waitKey(1)
    except KeyboardInterrupt:
        print("Quitting Program")
        break
    except:
        print("No tags in camera detection view!\n")
        continue