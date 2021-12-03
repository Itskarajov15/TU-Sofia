import random

listOfNumbers = []

for i in range(0,5):
    n = random.randint(1,100)
    listOfNumbers.append(n)

def func(listOfNumbers):    
    result = list()
    biggestElement = max(listOfNumbers)
    indexOfTheBiggestElement = listOfNumbers.index(biggestElement)

    result.append(biggestElement)
    result.append(indexOfTheBiggestElement)
    return result

result = func(listOfNumbers)

print(result)