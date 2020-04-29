#include <stdio.h>
#include <stdlib.h>

int main()
{
    float R, K, areaR, areaK;
    printf("Sisestage ringi raadius: (cm) \n");
    scanf("%f", &R);
    printf("Sisestage ruudu kulje pikkus: (cm) \n");
    scanf("%f", &K);

    areaR = 3.14 * R * R;
    areaK = K * K;

    if(areaR < areaK)
    {
        printf("Ringi pindala on %.2f. Ruudu pindala on %.2f. Ruudu pindala on suurim.\n", areaR, areaK);
    }
    else if(areaR > areaK)
    {
        printf("Ringi pindala on %.2f. Ruudu pindala on %.2f. Ringi pindala on suurim.\n", areaR, areaK);
    }
    else
    {
        printf("Error!");
    }

    return 0;
}
