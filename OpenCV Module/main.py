import gridSystem as gs
import cv2 as cv

tagPositions = None

def calibrateGrid():
    global tagPositions
    tagPositions = {"topL": (0, 0), "topR": (1279, 0), "botL": (0, 719), "botR": (1279, 719)}


def main():
    # Using the openCV docs for video-stream:
    # https://docs.opencv.org/3.4/dd/d43/tutorial_py_video_display.html
    # OpenCV variables for frames and video stream setup:
    cap = cv.VideoCapture(0) # Capture from the camera
    if not cap.isOpened():
        print("Cannot Open Camera, exiting program"); exit()

    # Capture AR tags from 4x4 cartesian road grid
    calibrateGrid()

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

    # Draw Grid:
    grid = gs.Grid(dimX, dimY, subdivisionsX, subdivisionsY, color, thickness)

    while (True):
        ret, currentFrame = cap.read()
        if not ret:
            print("Couldn't read in current frame, exiting")
            cap.release()
            exit()
        grid.drawGrid(currentFrame)
        cv.imshow("Current VideoStream", currentFrame)
        if (cv.waitKey(1) == ord('q')):
            break
        lastFrame = currentFrame
    cap.release()
    cv.destroyAllWindows()

if __name__ == "__main__": main()
