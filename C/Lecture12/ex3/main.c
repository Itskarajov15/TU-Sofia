#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[100];
    printf("Insert a text: ");
    fgets(text, sizeof(text), stdin);

    int count;

    for(int i = 0; text[i + 1] != '\0'; i++)
    {
        count = 0;

        for(int j = 0; text[j + 1] != '\0'; j++)
        {
            if(text[i] == text[j])
            {
                count++;
            }
        }

        printf("%c: ", text[i]);
        printf("%d\n", count);
    }

    return 0;
}
