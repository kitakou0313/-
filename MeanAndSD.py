import numpy as np


sampleNum = int(input('How many?>>'))

datalist = []
for i in range(sampleNum):
    y = int(input('Input No.' +str(i+1)+ ' y num>>'))
    datalist.append(y)

mean = sum(datalist)/sampleNum

zizyowa = 0
for i in datalist:
    zizyowa += (i-mean)**2

SD = np.sqrt(zizyowa/(sampleNum-1))

print("mean = ",mean)
print("SD = ",SD)
