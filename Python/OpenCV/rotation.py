import numpy as np
import cv2
import argparse
import imutils

ap = argparse.ArgumentParser()
ap.add_argument('-i', '--image', required=True, help="Path to the Image")

args = vars(ap.parse_args())

image = cv2.imread(args['image'])
cv2.imshow('Original Image', image)

rotated = imutils.rotate(image, 45)
cv2.imshow('Rotated by 45 Degrees', rotated)


(h, w) = image.shape[:2]
center = (w // 2, h // 2)
rotated = imutils.rotate(image, 45, center=(0, h), scale=0.5)
cv2.imshow('Scaled to half & Rotated by 45 Degrees at Bottom Left', rotated)

# M = cv2.getRotationMatrix2D(center, 45, 1.0)
# rotated = cv2.warpAffine(image, M, (w, h))
# cv2.imshow('Rotated by 45 Degrees', rotated)
#
# M = cv2.getRotationMatrix2D(center, -90, 1.0)
# rotated = cv2.warpAffine(image, M, (w, h))
# cv2.imshow('Rotated by -90 Degrees', rotated)
#
# M = cv2.getRotationMatrix2D((0, h), 45, 0.5)
# rotated = cv2.warpAffine(image, M, (w, h))
# cv2.imshow('Resized by half and Rotated by 45 Degrees from Bottom Left', rotated)

cv2.waitKey(0)
