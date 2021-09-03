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
