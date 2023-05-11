n = int(input())
database = {}
for x in range(n):
    name = input()
    if(name not in database.keys()):
        database[name] = 0
        print("OK")
    else:
        database[name] += 1
        print(name+ str(database[name]))