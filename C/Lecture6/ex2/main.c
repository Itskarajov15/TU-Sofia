#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber, secondNumber, *pointerOfFirstNumber, *pointerOfSecondNumber;
    firstNumber = 5;
    secondNumber = 4;

    pointerOfFirstNumber = &firstNumber;
    pointerOfSecondNumber = &secondNumber;

    int sum = returnSum(pointerOfFirstNumber, pointerOfSecondNumber);
    int subtraction = returnSubtraction(pointerOfFirstNumber, pointerOfSecondNumber);
    int multiplication = returnMultiplication(pointerOfFirstNumber, pointerOfSecondNumber);
    int division = returnDivision(pointerOfFirstNumber, pointerOfSecondNumber);

    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", subtraction);
    printf("Multiplication: %d\n", multiplication);
    printf("Division: %d\n", division);

    return 0;
}

int returnSum(int *firstPointer, int *secondPointer)
{
    return *firstPointer + *secondPointer;
}

int returnSubtraction(int *firstPointer, int *secondPointer)
{
    return *firstPointer - *secondPointer;
}

int returnMultiplication(int *firstPointer, int *secondPointer)
{
    return *firstPointer * *secondPointer;
}

int returnDivision(int *firstPointer, int *secondPointer)
{
    return *firstPointer / (*secondPointer * 1.1);
}
