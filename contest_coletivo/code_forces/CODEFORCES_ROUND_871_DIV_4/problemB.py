def myf(s: str):
    return len(s.strip().replace(" ", ""))

cases = int(input())

for case in range(cases):
    n = int(input())
    vector = input()
    vector = vector.split("1")
    print(max(map(myf, vector)))
    
