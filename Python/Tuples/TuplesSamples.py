inputText = input("Insert text: ")

firstTupleAsList = list()
listOfAsciiValues = list()

for i in inputText:
    firstTupleAsList.append(i)
    listOfAsciiValues.append(ord(i))

firstTuple = tuple(firstTupleAsList)
firstTupleAsList.reverse()
reversedTuple = tuple(firstTupleAsList) 

tupleOfAsciiValues = tuple(listOfAsciiValues)
listOfAsciiValues.sort()
sortedTupleOfAsciiValue = tuple(listOfAsciiValues)

print(firstTuple)
print(reversedTuple)
print(tupleOfAsciiValues)
print(sortedTupleOfAsciiValue)