import numpy as np

var = np.array([1, 2, 3])
var1 = np.array([1, 2, 3])
print(var+var1 *2,"\n")

var = np.array([15,654,846,123,56,651,54,158])
print("max: ",np.max(var),"\n")
print("min: ",np.min(var),"\n")
print("average: ",np.average(var),"\n")
print("average: ",np.argmax(var),"\n") #Position of maximum value.
print("average: ",np.argmin(var),"\n") #Position of minim

var11 = np.array([[15,654,123],[656,54,156]])
print("Max: ",np.max(var11),"\n")

var11 = np.array([[1,1,1,1],[1,1,1,1]])
print("cumsum: ",np.cumsum(var11),"\n")