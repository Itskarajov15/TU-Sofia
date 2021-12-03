import figureFormulas

figure = input("Enter a figure(triangle, square, rectangle, rhombus, trapezoid): ")

result = 0

if figure == "triangle":
    a = float(input("Enter a side: "))
    b = float(input("Enter a side: "))
    c = float(input("Enter a side: "))

    result = figureFormulas.CalculateAreaOfTriangle(a, b, c)
elif figure == "square":
    a = float(input("Enter a side: "))

    result = figureFormulas.CalculateAreaOfSquare(a)
elif figure == "rectangle":
    a = float(input("Enter a side: "))
    b = float(input("Enter a side: "))

    result = figureFormulas.CalculateAreaOfRectangle(a, b)        
elif figure == "rhombus":    
    d1 = float(input("Enter d1: "))
    d2 = float(input("Enter d2: "))

    result = figureFormulas.CalculateAreaOfRhombus(d1, d2)
elif figure == "trapezoid":
    a = float(input("Enter a side: "))
    b = float(input("Enter a side: "))
    h = float(input("Enter height: "))

    result = figureFormulas.CalculateAreaOfTrapezoid(a, b, h)
else:
    print("Invalid figure!")    

print(f"The area of {figure} is {result}")