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

def numpyToPy(numpyList):
    pyList = []
    for i in numpyList:
        pyList = numpyList[i][0]
    
    return pyList

cap=cv2.VideoCapture(0)
while True:
    success, img =cap.read()
    grayScale=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
    key=getattr(aruco, f'DICT_{markerSize}X{markerSize}_{totalMarkers}')
    arucoDict=aruco.Dictionary_get(key)
    arucoParam=aruco.DetectorParameters_create()
    corners,ids,rejected=aruco.detectMarkers(grayScale,arucoDict, parameters=arucoParam)
    #ids type is numpy.ndarray
    #NEED TO HAVE ARTAGS ON CAMERA, IF NOT, PROGRAM CRASHES
    #temp=ids.tolist()
    temp = np.array(ids)
    temp = temp.flatten()
    #temp = numpyToPy(ids)
    print(corners)
    print(f"Marker ID is: {temp}")
    print(f"\nThe length of the corners array is: {len(corners)}\n")
    # if counter==0 and len(ids)==2:
        # ids.sort()
        # counter+=1

    #if ids not in x:
    #    x.insert(counter,counter)
    #    counter+=1
    #print(x)
    #print(ids)
    cv2.imshow("Image", img)
    cv2.waitKey(1)