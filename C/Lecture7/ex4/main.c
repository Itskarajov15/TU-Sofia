#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, points;

    printf("Insert a number: ");
    scanf("%d", &number);

    if(number <= 100)
    {
        points = 5;
    }
    else if(number > 100)
    {
        points = number * 0.2;
    }
    else if(number > 1000)
    {
        points = number * 0.1;
    }

    if(number % 2 == 0)
    {
        points += 1;
    }

    if(number % 10 == 5)
    {
        points += 2;
    }

    number += points;

    printf("%d\n", points);
    printf("%d", number);

    return 0;
}
