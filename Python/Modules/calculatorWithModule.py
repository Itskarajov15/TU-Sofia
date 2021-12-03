import calculatorOperations

operation = input("Choose an operation(+, -, *, /): ")

firstNumber = int(input("Enter a number: "))
secondNumber = int(input("Enter another number: "))

result = 0

if operation == "+":
    result = calculatorOperations.Add(firstNumber, secondNumber)
elif operation == "-":
    result = calculatorOperations.Subtract(firstNumber, secondNumber)  
elif operation == "/":
    result = calculatorOperations.Divide(firstNumber, secondNumber)
elif operation == "*":
    result = calculatorOperations.Multiply(firstNumber, secondNumber)   

print(f"{firstNumber} {operation} {secondNumber} = {result}")           