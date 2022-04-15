import gridSystem as gs
import cv2 as cv

# This is placeholder dictionary that stores the Aruco tags that are placed at the corners of the grid that's defined in calibrateGrid()
tagPositions = None

# A helper class which stores the current camera's resolution in pixels.
class CameraResolution():
    def __init__(self, resX, resY):
        self.x = resX
        self.y = resY

# This is just a dummy declaration for the CameraResolution instance. The screen resolution will be changed based on logic defined in the main-loop.
camRes = CameraResolution(640, 480)

# Calibrates the grid by mapping the grid-endpoints to the ArUco tags specific to the corner positions on the road system.
def calibrateGrid():
    global tagPositions
    tagPositions = {"topL": (0, 0), "topR": (camRes.x-1, 0), "botL": (0, camRes.y-1), "botR": (camRes.x-1, camRes.y-1)}

# Using the openCV docs for video-stream:
# https://docs.opencv.org/3.4/dd/d43/tutorial_py_video_display.html
# OpenCV variables for frames and video stream setup:
def main():
    cap = cv.VideoCapture(0) # Capture from the camera

    if not cap.isOpened(): # Check if the video capture stream is working and connected to the camera.
        print("Cannot Open Camera, exiting program"); exit() # If we can't, we'll close the program with this error print statement.

    # Automatically sets the camera resolution from connected camera within the CameraResolution class instance we declared earlier:
    camRes.x = int(cap.get(cv.CAP_PROP_FRAME_WIDTH))
    camRes.y = int(cap.get(cv.CAP_PROP_FRAME_HEIGHT))

    print("Detected Camera Resolution is:\n Width: {}\n Height: {}".format(camRes.x, camRes.y)) # Debug statement for verifying current detected camera resolution.

    # In Future: Capture AR tags from 4x4 cartesian road grid
    calibrateGrid() # Calibrates the grid based on the ArUco tags for the four corners of the grid. Feel free to change this function to suit your needs.

    # This section assigns positions for declaring a grid instance and drawing the grid onto the current frame from our video-stream.
    startX = tagPositions.get("topL")[0]
    endX = tagPositions.get("topR")[0]
    startY = tagPositions.get("topL")[1]
    endY = tagPositions.get("botR")[1]
    dimX = (startX, endX)
    dimY = (startY, endY)
    subdivisionsX = 4
    subdivisionsY = 4
    thickness = 2
    color = (50, 50, 255)

    # Pass the above parameters to the grid instance:
    grid = gs.Grid(dimX, dimY, subdivisionsX, subdivisionsY, color, thickness)

    # The main program loop:
    while (True):
        ret, currentFrame = cap.read() # Grabs the current frame from the video feed and the return value if successful or not.
        if not ret: # If the return value was 0 or False, then we couldn't read in a frame from the video stream and this is an error, so we'll quit after freeing the capture stream.
            print("Couldn't read in current frame, exiting")
            cap.release()
            exit()

        #-------------------------------------------------------------------------------------------------------------------------------------------------------------
        # Whatever you need to do with the current video frame and/or ArUco tag position and velocity detection, do so here before the drawGrid function takes place. 
        # You may also calibrate the grid again if you suspect there to be motion in the environment we're running this in.
        #-------------------------------------------------------------------------------------------------------------------------------------------------------------

        grid.drawGrid(currentFrame) # Calls the drawGrid() function on the grid instance to draw the grid onto the current video frame.
        cv.imshow("Current VideoStream", currentFrame) # Displays the video frame that the grid was drawn upon to a window titled "Current VideoStream"
        
        if (cv.waitKey(1) == ord('q')): # If you press the 'q' key on your keyboard, the application will break out of the loop and close.
            break
        lastFrame = currentFrame
    
    cap.release() # Release the capture stream
    cv.destroyAllWindows() # Close all windows that were created from this program and openCV.

if __name__ == "__main__": main() # Call the main function if this file is ran as an executable.
