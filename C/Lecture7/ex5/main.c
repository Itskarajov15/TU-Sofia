#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstResult, secondResult, thirdResult;

    printf("Insert First Result: ");
    scanf("%d", &firstResult);
    printf("Insert Second Result: ");
    scanf("%d", &secondResult);
    printf("Insert Third Result: ");
    scanf("%d", &thirdResult);

    int fullTime = firstResult + secondResult + thirdResult;
    int miutes = fullTime / 60;
    int seconds = fullTime % 60;

    printf("%d:", miutes);
    printf("%02d", seconds);

    return 0;
}
