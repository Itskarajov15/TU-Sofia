#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numbers[7];
    double sumOfAllNumbers = 0;

    for(int i = 0; i < 7; i++)
    {
        printf("Insert a number: ");
        scanf("%lf", &numbers[i]);
        sumOfAllNumbers += numbers[i];
    }

    double average = 0;
    average = sumOfAllNumbers / 7;

    printf("The average sum is: %lf", average);

    return 0;
}
