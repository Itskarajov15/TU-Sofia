#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[5][5] =
    {
        {1, 234, 50, 20, 32},
        {62, 70, 150, 40, 10},
        {1, 56, 90, 7, 123},
        {71, 71, 123, 412, 99},
        {321, 91, 12, 34, 2}
    };

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d\t", numbers[i][j]);
        }

        printf("\n");
    }

    printf("Primary diagonal: ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", numbers[i][i]);
    }

    printf("\nSecondary diagonal: ");

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if((i + j) == (5 - 1))
            {
                printf("%d\t", numbers[i][j]);
            }
        }
    }

    printf("\nNumbers above the primary diagonal: ");

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(j > i)
            {
                printf("%d\t", numbers[i][j]);
            }
        }
    }

    printf("\nNumbers under the primary diagonal: ");

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(j < i)
            {
                printf("%d\t", numbers[i][j]);
            }
        }
    }

    return 0;
}
