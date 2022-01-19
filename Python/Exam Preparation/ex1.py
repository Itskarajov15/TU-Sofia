countOfNumbers = int(input('Insert the count of numbers: '))

numbers = list()

for i in range(0, countOfNumbers):
    numbers.append(int(input('Insert a number: ')))

sumOfNumbers = sum(numbers)
print(sumOfNumbers)
print(numbers)
print(numbers[::-1])