#include <stdio.h>
#include <stdlib.h>

int main()
{
    double km;
    char period;

    printf("Insert km: ");
    scanf("%d", &km);
    printf("Insert period(D-Day, N-Night): ");
    scanf(" %c", &period);

    double finalPrice;

    if(km < 20)
    {
        if(period == 'D')
        {
            finalPrice = 0.70 + 0.79 * km;
        }
        else if(period == 'N')
        {
            finalPrice = 0.70 + 0.90 * km;
        }
    }
    else if(km < 100)
    {
        finalPrice = 0.09 * km;
    }
    else
    {
        finalPrice = 0.06 * km;
    }

    printf("%lf", finalPrice);

    return 0;
}
