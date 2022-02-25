#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber, secondNumber, thirdNumber;

    scanf("%d", &firstNumber);
    scanf("%d", &secondNumber);
    scanf("%d", &thirdNumber);

    if(firstNumber < secondNumber && firstNumber < thirdNumber)
    {
        printf("%d", firstNumber);
    }
    else if(secondNumber < firstNumber && secondNumber < thirdNumber)
    {
        printf("%d", firstNumber);
    }
    else if(thirdNumber < firstNumber && thirdNumber < secondNumber)
    {
        printf("%d", thirdNumber);
    }

    return 0;
}
