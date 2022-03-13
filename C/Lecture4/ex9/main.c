#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, h, result;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter h: ");
    scanf("%f", &h);

    result = ((a + b) * h) / 2;
    printf("Result is: ");
    printf("%f", result);

    return 0;
}
