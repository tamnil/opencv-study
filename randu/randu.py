import cv2
import numpy as np


# fucking randu!!!!
x = cv2.UMat(2,2,cv2.CV_8U,[1,2,3])
y = cv2.UMat(2,2,cv2.CV_8U,[1,2,3])


dst = np.array([[1,2,3],[4,5,6],[2,3,4]])



cv2.randu(y,1,10);
cv2.randu(x,1,10);

print(x.get())
print(y.get())
# cv2.randu(dst,1,10);
