#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[7];

    for(int i = 0; i < 7; i++)
    {
        printf("Insert a number: ");
        scanf("%d", &numbers[i]);
    }

    int biggestNumber = numbers[0];

    for(int i = 0; i < 7; i++)
    {
        if(numbers[i] > biggestNumber)
        {
            biggestNumber = numbers[i];
        }
    }

    printf("The biggest number is: %d", biggestNumber);

    return 0;
}
