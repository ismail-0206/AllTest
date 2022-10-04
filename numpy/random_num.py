import numpy as np

var = np.random.rand(2,2)
print(var,"\n")

var = np.random.randn(2,2)
print(var,"\n")

var = np.random.ranf(2)
print(var,"\n")

#                   (min,max,total)
var = np.random.randint(0,15,5)
print(var,"\n")