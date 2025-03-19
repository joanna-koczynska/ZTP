n=input()

for i in range(int(n)):
    l=input()
    space= l.find(" ")
    r1 = l[0: space]
    r2 = l[space + 1:]

    r1=r1[::-1]
    r2 =r2[::-1]

    sum = int(r1) + int(r2)
    r3=str(sum)
    r3=r3[::-1]
    sum=int(r3)

    print(sum)


