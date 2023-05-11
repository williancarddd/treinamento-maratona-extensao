n_lanternas, l_tamanho_rua = input().split()
l_tamanho_rua = int(l_tamanho_rua)
n_lanternas = int(n_lanternas)

dist_inicio=0
dist_final=0
dist_lampadas=0


posicoes= [int(x) for x in input().split(" ")]
posicoes=sorted(posicoes)

dist_inicio= posicoes[0]
dist_final= l_tamanho_rua - posicoes[n_lanternas-1]

maior_temporario=0
for n in range(1, n_lanternas):
    if (posicoes[n]-posicoes[n-1]>maior_temporario):
        maior_temporario= posicoes[n]-posicoes[n-1]

dist_lampadas=maior_temporario/2

lista=[]
lista.append(dist_lampadas)
lista.append(dist_final)
lista.append(dist_inicio)

print(max(lista))




