import math
T=input()
zeroCounter=0

for i in range(int(T)):
    N=int(input())
    while(N>=5):
        N/=5
        N= math.floor(N)
        zeroCounter+=N
       

    print(zeroCounter)
    zeroCounter = 0
