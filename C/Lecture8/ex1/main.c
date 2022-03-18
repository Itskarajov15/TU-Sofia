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

    int sum = 0;

    for(int i = 0; i < 7; i++)
    {
        sum += numbers[i];
    }

    printf("Sum is: %d", sum);

    return 0;
}
