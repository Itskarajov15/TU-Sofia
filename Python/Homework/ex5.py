def Add(a, b):
    return a + b

def Subtract(a, b):
    return a - b 

def Multiply(a, b):
    return a * b

def Divide(a, b):
    return a / b

operation = input("Chose an operation(+, -, *, /): ")

while True:
    try:
        firstNumber = int(input("Insert a number: "))
        secondNumber = int(input("Insert another number: "))
    except ValueError:
        print("Invalid number... Input new numbers.")
        continue

    result = 0

    if operation == "+":
        result = Add(firstNumber, secondNumber)
    elif operation == "-":
        result = Subtract(firstNumber, secondNumber)
    elif operation == "*":
        result = Multiply(firstNumber, secondNumber)
    elif operation == "/":
        result = Divide(firstNumber, secondNumber) 

    break               


print(f"{firstNumber} {operation} {secondNumber} = {result}")