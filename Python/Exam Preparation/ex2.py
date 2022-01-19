import math

number = int(input('Insert a number: '))
listOfDigits = list()

while number > 0:
    currDigit = number % 10
    number = math.floor(number / 10)
    listOfDigits.append(currDigit)

firstTuple = tuple(listOfDigits)
listOfDigits.reverse()
reversedTuple = tuple(listOfDigits)

print(firstTuple, reversedTuple)
    