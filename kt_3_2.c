#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float K, X;
    char P[100];

    const float M = 0.378;
    const float V = 0.907;
    const float E = 1.000;
    const float MA = 0.377;
    const float J = 2.364;
    const float S = 1.064;
    const float U = 0.889;
    const float N = 1.125;

    printf("Sisestage kaal kilogrammides:\n");
    scanf("%f", &K);
    printf("Sisestage planeet(merkuur, veenus, maa, marss, jupiter, saturn, uraan, neptuun):\n");
    scanf("%s", P);

    if(strcmp("merkuur", P) == 0)
    {
        X = K * M;
        printf("Teie kaal planeedil %s oleks %.2f kilogrammi", P, X);
    }
    else if(strcmp("veenus", P) == 0)
    {
        X = K * V;
        printf("Teie kaal planeedil %s oleks %.2f kilogrammi", P, X);
    }
    else if(strcmp("maa", P) == 0)
    {
        X = K * E;
        printf("Teie kaal planeedil %s oleks %.2f kilogrammi", P, X);
    }
    else if(strcmp("marss", P) == 0)
    {
        X = K * MA;
        printf("Teie kaal planeedil %s oleks %.2f kilogrammi", P, X);
    }
    else if(strcmp("jupiter", P) == 0)
    {
        X = K * J;
        printf("Teie kaal planeedil %s oleks %.2f kilogrammi", P, X);
    }
    else if(strcmp("saturn", P) == 0)
    {
        X = K * S;
        printf("Teie kaal planeedil %s oleks %.2f kilogrammi", P, X);
    }
    else if(strcmp("uraan", P) == 0)
    {
        X = K * U;
        printf("Teie kaal planeedil %s oleks %.2f kilogrammi", P, X);
    }
    else if(strcmp("neptuun", P) == 0)
    {
        X = K * N;
        printf("Teie kaal planeedil %s oleks %.2f kilogrammi", P, X);
    }
    else{
        printf("error!");
    }

    return 0;
}
