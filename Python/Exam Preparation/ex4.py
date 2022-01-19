text = input('Insert text: ')

dictionary = dict()

for i in text:
    if i in dictionary:
        dictionary[i] += 1
    else:
        dictionary[i] = 1

print(dictionary)