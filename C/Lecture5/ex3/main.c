#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int b = 6;

    swap(&a, &b);
    return 0;
}

void swap(int* a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d %d", *a, *b);
}
