def CheckIfNumberIsPalindrome(number):
    numberAsString = str(number)
    reversedNumber = numberAsString[::-1]

    if int(reversedNumber) == int(number):
        return 1
    else:
        return 0
  

number = int(input('Insert a number: '))

if CheckIfNumberIsPalindrome(number) == 1:
    print(f"{number} is palindrome")
else:
    print(f"{number} is not palindrome")    
        
