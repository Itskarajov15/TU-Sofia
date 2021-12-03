inputText = input("Insert a text: ")
n = int(input("Insert range between symbols: "))

inputTextAsTuple = tuple(inputText)
listOfSymbols = list()

for i in range(0, len(inputTextAsTuple), n):
    listOfSymbols.append(inputTextAsTuple[i])

resultAsTuple = tuple(listOfSymbols)

print(resultAsTuple)