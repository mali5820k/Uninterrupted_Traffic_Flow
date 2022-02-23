import cv2 as cv

# Using the OpenCV docs for the drawing functions:
# https://docs.opencv.org/4.x/dc/da5/tutorial_py_drawing_functions.html

# Class that constructs a grid system that is projected on the openCV video feed.
class Grid():
    # Constructor that sets the grid's parameters to the class's references.
    def __init__(self, dimX = (0, 1), dimY = (0, 4), subdivisionsX:int = 4, subdivisionsY:int = 4, color = (5, 100, 100), lineThickness = 2, mapFormula = (1, 1)):
        self.dimX = dimX
        self.dimY = dimY
        self.subdivisionsX = subdivisionsX
        self.subdivisionsY = subdivisionsY
        self.color = color
        self.lineThickness = lineThickness
        self.mapFormula = mapFormula # these are offset Factors to transform openCV grid to this one
    
    # Draws a grid on the current video frame.
    def drawGrid(self, frame):
        
        # Draw the bounds of the grid as a rectange:
        cv.rectangle(frame, (self.dimX[0], self.dimY[0]), (self.dimX[1], self.dimY[1]), self.color, self.lineThickness)

        xStepFactor = self.dimX[1]/self.subdivisionsY
        yStepFactor = self.dimY[1]/self.subdivisionsX

        xStepFactor = int(xStepFactor)
        yStepFactor = int(yStepFactor)

        # Draw all of the vertical grid lines:
        for i in range(self.dimX[0], self.dimX[1], xStepFactor):
            if i == 0:
                continue
            
            # Draw one line using the x and y coordinates being looped through in this loop.
            cv.line(frame, (i, self.dimY[0]), (i, self.dimY[1]), self.color, self.lineThickness)
        
        # Draw all of the horizontal grid lines:
        for i in range(self.dimY[0], self.dimY[1], yStepFactor):
            if i == 0:
                continue

            # Draw one line using the x and y coordinates being looped through in this loop.
            cv.line(frame, (self.dimX[0], i), (self.dimX[1], i), self.color, self.lineThickness)

    # Translates the pixel-coordinates from openCV into the grid coordinate system if there is mapping difference
    # between the two coordinate systems.
    def getCoordinates(self, openCVCoordinates = (0,0)):
        transformedX = self.mapFormula[0] * openCVCoordinates[0]
        transformedY = self.mapFormula[1] * openCVCoordinates[1]
        return (transformedX, transformedY)
    
    # For visualization purposes, draws a single point to the current video feed at the specified point pixel position.
    def drawPoint(self, frame, point = (0, 0), color = (0, 255, 0)):
        cv.line(frame, point, point, color, self.thickness)