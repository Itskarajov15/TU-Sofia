#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstText[100];
    char secondText[100];

    printf("Insert first text: ");
    fgets(firstText, sizeof(firstText), stdin);

    printf("Insert second text: ");
    fgets(secondText, sizeof(secondText), stdin);

    int areDifferent = 1;

    int biggestLenght = 0;

    if(strlen(firstText) > strlen(secondText))
    {
        biggestLenght = strlen(firstText);
    }
    else if(strlen(firstText) < strlen(secondText))
    {
        biggestLenght = strlen(secondText);
    }
    else
    {
        biggestLenght = strlen(firstText);
    }

    for(int i = 0; biggestLenght - 1; i++)
    {
        if(firstText[i] != secondText[i])
        {
            areDifferent = 0;
        }

        if (areDifferent == 0)
        {
            break;
        }
    }

    if(areDifferent == 0)
    {
        printf("Texts are different");
    } else
    {
        printf("Text are the same");
    }

    return 0;
}
