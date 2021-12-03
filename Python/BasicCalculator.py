def ValidateNumber(number):
    if type(number) != int:
        raise ValueError

    return number

def ValidateSign(sign):
    if sign != "+" and sign != "-" and sign != "*" and sign != "/":
        raise ValueError

    return sign             

while True:
    sign = input("Enter a sign: ")

    try:
        ValidateNumber(sign)
    except ValueError:
        print("Invalid sign...")
        print("Enter a new sign")
        continue

    firstNumber = int(input("Enter a number: "))
    secondNumber = int(input("Enter second number: "))
