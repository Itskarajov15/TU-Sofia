#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number > 6)
    {
        printf("Number is bigger than 6");
    }

    return 0;
}
