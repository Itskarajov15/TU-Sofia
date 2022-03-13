#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variable, *pointer;
    variable = 5;
    pointer = &variable;

    printf("Address of variable: %x\n", &variable);
    printf("Address of variable, saved in pointer: %x\n", pointer);
    printf("Address of pointer: %x\n", pointer);
    printf("Value of variable: %d\n", *pointer);

    return 0;
}
