def Addition(a, b):
    return a + b

def Subtraction(a, b):
    return a - b

def Division(a, b):
    return a / b

def Multiplication(a, b):
    return a * b


operation = input('Enter operation[+, -, /, *]: ')    
a = int(input('Enter first number: '))
b = int(input('Enter second number: '))

result = 0

if operation == '+':
    result = Addition(a, b)
elif operation == '-':
    result = Subtraction(a, b)
elif operation == '/':
    result = Division(a, b)
elif operation == '*':
    result = Multiplication(a, b)            

print(f'{a} {operation} {b} = {result}')    