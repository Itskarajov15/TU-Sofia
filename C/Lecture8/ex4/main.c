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

    double averageSum = sumOfAllNumbers / 7;
    double nearestNumber = numbers[0];
    double difference = abs(nearestNumber - averageSum);
    int index;

    for(int i = 1; i < 7; i++)
    {
        double currDifference = abs(numbers[i] - averageSum);

        if(currDifference < difference)
        {
            difference = currDifference;
            nearestNumber = numbers[i];
            index = i + 1;
        }
    }

    printf("The nearest number is: %lf", nearestNumber);
    printf("The index is: %d", index);

    return 0;
}
