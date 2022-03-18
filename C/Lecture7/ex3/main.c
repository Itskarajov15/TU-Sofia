#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber, secondNumber, thirdNumber;

    printf("Insert firstNumber: ");
    scanf("%d", &firstNumber);
    printf("Insert secondNumber: ");
    scanf("%d", &secondNumber);
    printf("Insert thirdNumber: ");
    scanf("%d", &thirdNumber);

    if(firstNumber == secondNumber && firstNumber == thirdNumber)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
