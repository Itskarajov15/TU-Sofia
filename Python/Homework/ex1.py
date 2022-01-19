text = input("Insert text: ")

tuple1 = tuple(text)
tuple2 = tuple(text[::-1])

textInList = list()
for i in text:
    textInList.append(ord(i))

tuple3 = tuple(textInList)   
textInList.sort() 
tuple4 = tuple(textInList)

print(tuple1)
print(tuple2)
print(tuple3)    
print(tuple4)