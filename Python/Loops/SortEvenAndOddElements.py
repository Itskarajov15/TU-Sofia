import random

listOfNumbers = []

for i in range(0,5):
    n = random.randint(1,100)
    listOfNumbers.append(n)

evenNumbers = list()
oddNumbers = list()

for i in range(0,len(listOfNumbers), 1):
    if i % 2 == 0:
        evenNumbers.append(listOfNumbers[i])
    else:
        oddNumbers.append(listOfNumbers[i])    
   
evenNumbers.sort()
oddNumbers.sort(reverse = True)

print(evenNumbers)
print(oddNumbers)   