string=input()

maior_sequencia=0
sequencia_atual=0
for x in range(0,len(string)):
    if x==len(string)-1:
        break
    if string[x]==string[x+1]:
        sequencia_atual+=1
    else:
        if maior_sequencia<sequencia_atual:
            maior_sequencia=sequencia_atual
        sequencia_atual=0
        
if maior_sequencia<sequencia_atual:
    maior_sequencia=sequencia_atual
print(maior_sequencia+1)