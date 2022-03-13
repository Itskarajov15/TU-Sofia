#include <stdio.h>
#include <stdlib.h>

int main()
{
    CheckIfNumberIsEvenOrOdd(2);
    printf("\n");
    CheckIfNumberIsEvenOrOdd(1);

    return 0;
}

void CheckIfNumberIsEvenOrOdd(int number)
{
    if(number % 2 == 0){
        printf("Number is even.");
    }
    else
    {
        printf("Number is odd.");
    }
}
