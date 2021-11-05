number = int(input('Insert a number: '))

listOfNumbers = list()

for i in range(1, number + 1, 1):
    listOfNumbers.append(i)

dict = dict()

for i in range(0, len(listOfNumbers), 1):
    dict[listOfNumbers[i]] = listOfNumbers[len(listOfNumbers) - 1 - i]
    
print(dict)