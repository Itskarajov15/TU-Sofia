#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNum, secondNum;

    while(1)
    {
        printf("Insert the first number: ");
        scanf("%d", &firstNum);
        if(firstNum == 0)
        {
            break;
        }

        printf("Insert the second number: ");
        scanf("%d", &secondNum);

        printf("The bigger number is: %d\n", returnBiggerNumber(firstNum, secondNum));
        printf("The smaller number is: %d\n", returnSmallerNumber(firstNum, secondNum));
    }


    return 0;
}

int returnBiggerNumber(int firstNumber, int secondNumber)
{
    if(firstNumber > secondNumber)
    {
        return firstNumber;
    }
    else if(secondNumber > firstNumber)
    {
        return secondNumber;
    }
}

int returnSmallerNumber(int firstNumber, int secondNumber)
{
    if(firstNumber > secondNumber)
    {
        return secondNumber;
    }
    else if(secondNumber > firstNumber)
    {
        return firstNumber;
    }
}
