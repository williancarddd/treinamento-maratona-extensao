t = int(input())

for x in range(t):
    string_descrip=""
    n = int(input())
    s = input()

    string_lista=list(s)

    while(len(string_lista)>0):
        primeira_letra=string_lista.pop(0)
        string_descrip.join(primeira_letra)

        segunda_ocorrencia=string_lista.index(primeira_letra)
        for x in range(0,segunda_ocorrencia+1):
            string_lista.pop(0)
            print("teste")
    print(string_descrip)



        











