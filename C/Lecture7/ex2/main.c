#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours, minutes;

    printf("Insert hours: ");
    scanf("%d", &hours);
    printf("Insert minutes: ");
    scanf("%d", &minutes);

    minutes += 15;

    if(minutes > 60)
    {
        minutes -= 60;
        hours++;
    }

    if(hours > 23)
    {
        hours -= 24;
    }

    printf("%02d:", hours);
    printf("%02d", minutes);

    return 0;
}
