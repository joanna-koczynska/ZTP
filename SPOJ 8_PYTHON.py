t=input()
symbols=[]
onp=""

for x in range(int(t)):
    expr=input()

    for i in range(len(expr)):
        if(expr[i].isalnum()):
            onp+=expr[i]
        if( expr[i].isalnum()==False and expr[i] != ')' and expr[i] != '('):
            symbols.append(expr[i])
        if(expr[i] != ')' and symbols):
            onp+=str(symbols[-1])
            symbols.pop
    print(onp)     
    onp=""