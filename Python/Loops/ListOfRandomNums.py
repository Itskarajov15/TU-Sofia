import random

listOfNumbers = []

for i in range(0,5):
    n = random.randint(1,100)
    listOfNumbers.append(n)

print(listOfNumbers)
result = list()

for i in range(0, len(listOfNumbers) - 1):
    currSum = listOfNumbers[i] + listOfNumbers[i + 1]
    if i == 0:
        result.append(listOfNumbers[i])
    result.append(currSum)
    result.append(listOfNumbers[i + 1])

print(result) 