t=input()
f=1

for i in range(int(t)):
    n=input()
    if n==1 or n==0:
        print(1)
    else:
        for j in range(1,int(n)+1):
            f*=j
        print(f)
        f=1

                
