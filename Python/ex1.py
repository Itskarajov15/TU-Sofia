myFile = open("text.txt", "r")

for line in myFile.readlines():
    print(line)