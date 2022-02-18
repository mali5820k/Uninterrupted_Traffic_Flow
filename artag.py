import cv2
import cv2.aruco as aruco
import numpy as np
import os
#passing in image and marker size
def captureid(img,markerSize=6,totalMarkers=250, draw=True):
	grayScale=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
	key=getattr(aruco, f'DICT_{markerSize}X{markerSize}_{totalMarkers}')
	arucoDict=aruco.Dictionary_get(key)
	arucoParam=aruco.DetectorParameters_create()
	bboxs,ids,rejected=aruco.detectMarkers(grayScale,arucoDict, parameters=arucoParam)
	print(ids)
	


def main():
	cap=cv2.VideoCapture(0)
	while True:
		success, img =cap.read()
		captureid(img)
		cv2.imshow("Image", img)
		cv2.waitKey(1)
if __name__ =="__main__":
   main()