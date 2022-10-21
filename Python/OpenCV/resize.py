import numpy as np
import cv2
import argparse
import imutils

ap = argparse.ArgumentParser()
ap.add_argument('-i', '--image', required=True, help='Path to the Image')

args = vars(ap.parse_args())

image = cv2.imread(args['image'])
cv2.imshow('Original Image', image)

r = 300.0 / image.shape[1]
dim = (300, int(image.shape[0] * r))

resized = imutils.resize(image, height=300)
cv2.imshow('Resized (Height = 300)', resized)

resized = imutils.resize(image, width=300)
cv2.imshow('Resized (Width = 300)', resized)

# resized = cv2.resize(image, dim, interpolation=cv2.INTER_AREA)
# cv2.imshow('Reszed (Width) to 300', resized)
#
# r = 300.0 / image.shape[0]
# dim = (int(image.shape[1] * r), 300)
#
# resized = cv2.resize(image, dim, interpolation=cv2.INTER_AREA)
# cv2.imshow('Resized (Height) to 300', resized)

cv2.waitKey(0)
