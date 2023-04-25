number = int(input())
numbers = input().split()
numbers = [int(x) for x in numbers]

somat = sum (range(1, number+1)) 
somaN = sum(numbers)

print(somat-somaN)