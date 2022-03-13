#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number(1-square, 2-rectangle, 3-triangle, 4-circle): ");
    scanf("%d", &number);

    switch(number)
    {
        case 1: getSquareArea(); break;
        case 2: getRectangleArea(); break;
        case 3: getTriangleArea(); break;
        case 4: getCircleArea(); break;
        default: printf("Invalid number."); break;
    }

    return 0;
}

void getSquareArea()
{
    float a, result;
    printf("Enter a: ");
    scanf("%f", &a);

    result = a * a;

    printf("Square...");
    printf("\nArea is: %f", result);
}

void getRectangleArea()
{
    float a, b, result;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);

    result = a * b;

    printf("Rectangle...");
    printf("\nArea is: %f", result);
}

void getTriangleArea()
{
    float a, h, result;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter h: ");
    scanf("%f", &h);

    result = (a * h) / 2;

    printf("Triangle...");
    printf("\nArea is: %f", result);
}

void getCircleArea()
{
    float r, pi, result;
    pi = 3,14;

    printf("Enter r: ");
    scanf("%f", &r);

    result = pi * r * r;

    printf("Circle...");
    printf("\nArea is: %f", result);
}
