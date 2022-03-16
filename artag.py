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

cap=cv2.VideoCapture(0)
while True:
    success, img =cap.read()
    grayScale=cv2.cvtColor(img,cv2.COLORBGR2GRAY)
    key=getattr(aruco, f'DICT{markerSize}X{markerSize}_{totalMarkers}')
    arucoDict=aruco.Dictionary_get(key)
    arucoParam=aruco.DetectorParameters_create()
    corners,ids,rejected=aruco.detectMarkers(grayScale,arucoDict, parameters=arucoParam)
    #ids type is numpy.ndarray
    #NEED TO HAVE ARTAGS ON CAMERA, IF NOT, PROGRAM CRASHES
    #temp=ids.tolist()
    print(corners)
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