#include <stdio.h>
#include <stdlib.h>

int main()
{
    float degree, result;

    printf("Enter degrees: ");
    scanf("%f", &degree);

    result = (degree * 9 / 5) + 32;

    printf("%f", result);

    return 0;
}
