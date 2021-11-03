inputNumber = int(input("Enter a number: "))

listOfDigits = []

while inputNumber > 0:
    listOfDigits.append(inputNumber % 10)
    inputNumber //= 10

reversedTuple = tuple(listOfDigits)

listOfDigits.reverse()
tuple = tuple(listOfDigits)

print(f"Tuple: {tuple}")
print(f"Reversed tuple: {reversedTuple}")