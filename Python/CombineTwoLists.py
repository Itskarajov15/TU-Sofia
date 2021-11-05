import random

firstList = list()
secondList = list()

for i in range(0,5):
    n = random.randint(1,100)
    p = random.randint(1,100)
    firstList.append(n)
    secondList.append(p)

result = list()

for i in range(0, len(firstList), 1):
    result.append(firstList[i])
    result.append(secondList[i])

print(result)    