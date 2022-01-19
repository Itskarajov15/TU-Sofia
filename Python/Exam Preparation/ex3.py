import random

numbers = list()
result = list()
for i in range(0, 5):
    numbers.append(random.randint(0, 100))

print(numbers)
for i in range(0, len(numbers) - 1):
    newNumber = numbers[i] + numbers[i + 1]
    if i == 0:
        result.append(numbers[i])
    result.append(newNumber)
    result.append(numbers[i + 1])

print(result)