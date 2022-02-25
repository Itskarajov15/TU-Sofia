#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end, sum;
    printf("Enter a number for start: ");
    scanf("%d", &start);
    printf("Enter a number for end: ");
    scanf("%d", &end);

    for(int i = start; i < end; i++)
    {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}
