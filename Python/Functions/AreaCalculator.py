def GetAreaOfRectangle(a, b):
    return a * b

def GetAreaOfSquare(a):
    return a * a;   

def GetAreaOfTriangle(a, b):
    return (a * b) / 2

figure = input('Insert a figure: ')
area = 0

if figure == "Rectangle":
    a = float(input('Insert a: '))
    b = float(input('Insert b: '))
    area = GetAreaOfRectangle(a, b)
elif figure == "Square":
    a = float(input('Insert a: '))    
    area = GetAreaOfSquare(a)
elif figure == "Triangle":
    a = float(input('Insert a: '))
    b = float(input('Insert b: '))
    area = GetAreaOfTriangle(a, b)

print(f'The area of {figure} is {area:.2f}')    