import random

listOfNumbers = []
number = random.randint(0,100)

for i in range(0,10):
    n = random.randint(1,100)
    listOfNumbers.append(n)

def func(listOfNumbers, number):
    for i in range(len(listOfNumbers)):
        if listOfNumbers[i] > number:
            listOfNumbers[i] = 0

    return listOfNumbers            

print(func(listOfNumbers, number))