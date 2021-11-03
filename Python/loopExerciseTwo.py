a = int(input("a = "))

sum = 0

while True:
    digit =  a % 10
    a /= 10

    sum += digit

    if a <= 0:
        break

print(sum)    
    