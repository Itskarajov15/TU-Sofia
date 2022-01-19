text = input("Insert text: ")
dictionary = dict()

for i in text:
    dictionary[i] = ord(i)

print(dictionary)    