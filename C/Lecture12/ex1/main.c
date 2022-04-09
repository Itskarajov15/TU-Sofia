#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[20];
    printf("Insert a text: ");
    fgets(s, sizeof(s), stdin);
    int i;

    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of the string: %d", i - 1);
    return 0;
}
