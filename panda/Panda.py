import pandas as pd

var=[1, 2, 3, 4, 5, 6, 7, 8]
print(pd.Series(var),"\n")

var0={"name": ["Ismail","Rayhan"],
      "age" : [18,16]
      }
print(pd.Series(var0),"\n")

var1=[1,5,4,2,5,4,5]
print(pd.DataFrame(var1),"\n")

var01={"name": ["Ismail","Rayhan"],
      "age" : [18,16]
      }
print(pd.DataFrame(var01),"\n")