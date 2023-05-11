n = int(input())

for y in range(0, n):
    x = int(input())
    lados  = str((x + 360) / 180)
    print(lados)
    if(int(lados.split(".")[1]) > 0):
       print("NO")
    else:
        print("YES")