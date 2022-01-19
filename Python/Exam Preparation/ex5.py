def changeEveryBiggerNumberToZero(listOfNumbers, number):
    for i in range(0, len(listOfNumbers)):
        if(i > number):
            listOfNumbers[i] = 0
    
    return listOfNumbers

numbers = [1, 3, 5, 2, 4, 5]
result = changeEveryBiggerNumberToZero(numbers, 3)
print(result)