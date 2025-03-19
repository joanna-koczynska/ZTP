#SMPSEQ3 - Fun with Sequences 

n=input()


S=[]
Q=[]
F=[]

s_str=input()

for x in s_str.split():
    S.append(int(x))


m=input()
q_str=input()
for x in q_str.split():
    Q.append(int(x))


for i in range(int(n)):
    flag=False
    for j in range(int(m)):
        if S[i]==Q[j]:
            flag=True
            break
    if not flag:
        F.append(S[i])  


print(*F)
