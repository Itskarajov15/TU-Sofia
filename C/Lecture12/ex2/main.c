#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[100];
    printf("Insert a text: ");
    fgets(text, sizeof(text), stdin);

    int count = 1;

    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i] == ' ')
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
