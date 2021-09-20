# To find the contour
from __future__ import print_function
import cv2 as cv
import numpy as np
import argparse
import random as rng

rng.seed(12345)

def thresh_callback(val):
    threshold = val

    # Detect edges using Canny
    canny_output = cv.Canny(src_gray, threshold, threshold * 2)

    # Find contours
    contours, _ = cv.findContours(canny_output, cv.RETR_TREE, cv.CHAIN_APPROX_SIMPLE)

    # Find the convex hull object for each contour
    hull_list = []
    for i in range(len(contours)):
        hull = cv.convexHull(contours[i])
        hull_list.append(hull)

    # Draw contours + hull results
    drawing = np.zeros((canny_output.shape[0], canny_output.shape[1], 3), dtype=np.uint8)
    for i in range(len(contours)):
        color = (rng.randint(0,256), rng.randint(0,256), rng.randint(0,256))
        cv.drawContours(drawing, contours, i, color)
        cv.drawContours(drawing, hull_list, i, color)

    # Show in a window
    cv.imshow('Contours', drawing)

# Load source image
parser = argparse.ArgumentParser(description='Code for Convex Hull tutorial.')
parser.add_argument('--input', help='Path to input image.', default='stuff.jpg')
args = parser.parse_args()

src = cv.imread(cv.samples.findFile(args.input))
if src is None:
    print('Could not open or find the image:', args.input)
    exit(0)

# Convert image to gray and blur it
src_gray = cv.cvtColor(src, cv.COLOR_BGR2GRAY)
src_gray = cv.blur(src_gray, (3,3))

# Create Window
source_window = 'Source'
cv.namedWindow(source_window)
cv.imshow(source_window, src)
max_thresh = 255
thresh = 100 # initial threshold
cv.createTrackbar('Canny thresh:', source_window, thresh, max_thresh, thresh_callback)
thresh_callback(thresh)

cv.waitKey()
=======
import cv2
import numpy as np

img = cv2.imread('/Users/prince/Work/Developer/DS_Algo/src/main/PipeCounter/input/998d98e.jpg')

img = cv2.resize(img, (640,480))

# convert BGR image to HSV
hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

# define a null callback function for Trackbar
def null(x):
    pass

# create six trackbars for H, S and V - lower and higher masking limits 
cv2.namedWindow('HSV')
# arguments: trackbar_name, window_name, default_value, max_value, callback_fn
cv2.createTrackbar("HL", "HSV", 0, 180, null)
cv2.createTrackbar("HH", "HSV", 180, 180, null)
cv2.createTrackbar("SL", "HSV", 0, 255, null)
cv2.createTrackbar("SH", "HSV", 255, 255, null)
cv2.createTrackbar("VL", "HSV", 0, 255, null)
cv2.createTrackbar("VH", "HSV", 255, 255, null)

while True:
    # read the Trackbar positions
    hl = cv2.getTrackbarPos('HL','HSV')
    hh = cv2.getTrackbarPos('HH','HSV')
    sl = cv2.getTrackbarPos('SL','HSV')
    sh = cv2.getTrackbarPos('SH','HSV')
    vl = cv2.getTrackbarPos('VL','HSV')
    vh = cv2.getTrackbarPos('VH','HSV')

    # create a manually controlled mask
    # arguments: hsv_image, lower_trackbars, higher_trackbars
    mask = cv2.inRange(hsv, np.array([hl, sl, vl]), np.array([hh, sh, vh]))
    # derive masked image using bitwise_and method
    final = cv2.bitwise_and(img, img, mask=mask)

    # display image, mask and masked_image 
    cv2.imshow('Original', img)
    cv2.imshow('Mask', mask)
    cv2.imshow('Masked Image', final)

    key = cv2.waitKey(1) & 0xFF
    if key == ord('q'):
        break
cv2.destroyAllWindows() 












'''
from __future__ import print_function
import cv2 as cv
import numpy as np
import argparse
import random as rng

rng.seed(12345)

def thresh_callback(val):
    threshold = val

    ## [Canny]
    # Detect edges using Canny
    canny_output = cv.Canny(src_gray, threshold, threshold * 2)
    ## [Canny]

    ## [findContours]
    # Find contours
    contours, _ = cv.findContours(canny_output, cv.RETR_TREE, cv.CHAIN_APPROX_SIMPLE)
    ## [findContours]

    ## [allthework]
    # Approximate contours to polygons + get bounding rects and circles
    contours_poly = [None]*len(contours)
    boundRect = [None]*len(contours)
    centers = [None]*len(contours)
    radius = [None]*len(contours)
    for i, c in enumerate(contours):
        contours_poly[i] = cv.approxPolyDP(c, 3, True)
        boundRect[i] = cv.boundingRect(contours_poly[i])
        centers[i], radius[i] = cv.minEnclosingCircle(contours_poly[i])
    ## [allthework]

    ## [zeroMat]
    drawing = np.zeros((canny_output.shape[0], canny_output.shape[1], 3), dtype=np.uint8)
    ## [zeroMat]

    ## [forContour]
    # Draw polygonal contour + bonding rects + circles
    for i in range(len(contours)):
        color = (rng.randint(0,256), rng.randint(0,256), rng.randint(0,256))
        cv.drawContours(drawing, contours_poly, i, color)
        cv.rectangle(drawing, (int(boundRect[i][0]), int(boundRect[i][1])), \
          (int(boundRect[i][0]+boundRect[i][2]), int(boundRect[i][1]+boundRect[i][3])), color, 2)
        cv.circle(drawing, (int(centers[i][0]), int(centers[i][1])), int(radius[i]), color, 2)
    ## [forContour]

    ## [showDrawings]
    # Show in a window
    cv.imshow('Contours', drawing)
    ## [showDrawings]

## [setup]
# Load source image
parser = argparse.ArgumentParser(description='Code for Creating Bounding boxes and circles for contours tutorial.')
parser.add_argument('--input', help='Path to input image.', default='stuff.jpg')
args = parser.parse_args()

src = cv.imread(cv.samples.findFile(args.input))
if src is None:
    print('Could not open or find the image:', args.input)
    exit(0)

# Convert image to gray and blur it
src_gray = cv.cvtColor(src, cv.COLOR_BGR2GRAY)
src_gray = cv.blur(src_gray, (3,3))
## [setup]

## [createWindow]
# Create Window
source_window = 'Source'
cv.namedWindow(source_window)
cv.imshow(source_window, src)
## [createWindow]
## [trackbar]
max_thresh = 255
thresh = 100 # initial threshold
cv.createTrackbar('Canny thresh:', source_window, thresh, max_thresh, thresh_callback)
thresh_callback(thresh)
## [trackbar]

cv.waitKey()
'''


# blur_hor = cv2.filter2D(image[:, :, 0], cv2.CV_32F, kernel=np.ones((11,1,1), np.float32)/11.0, borderType=cv2.BORDER_CONSTANT)
# blur_vert = cv2.filter2D(image[:, :, 0], cv2.CV_32F, kernel=np.ones((1,11,1), np.float32)/11.0, borderType=cv2.BORDER_CONSTANT)
# mask = ((image[:,:,0]>blur_hor*1.2) | (image[:,:,0]>blur_vert*1.2)).astype(np.uint8)*255

# circles = cv2.HoughCircles(mask,
#                            cv2.HOUGH_GRADIENT,
#                            minDist=8,
#                            dp=1,
#                            param1=150,
#                            param2=12,
#                            minRadius=1,
#                            maxRadius=10)
# output = image.copy()

# count = 0
# for (x, y, r) in circles[0, :, :]:
#   cv2.circle(output, (int(x), int(y)), int(r), (0, 255, 0), 4)
#   count = count + 1

# print('Count: {}'.format(count))

# cv2.imwrite('/Users/prince/Work/Developer/DS_Algo/src/main/PipeCounter/output/thresh.jpg', mask)
# cv2.imwrite('/Users/prince/Work/Developer/DS_Algo/src/main/PipeCounter/output/image.jpg', output)
