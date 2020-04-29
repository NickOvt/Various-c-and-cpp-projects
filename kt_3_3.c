#include <stdio.h>
#include <stdlib.h>

int main()
{

    int   P, S;
    float Y, D, K, YK, DK;

    printf("Sisestage paevade arv:\n");
    scanf("%d", &P);

    if(P >= 1 && P <= 30){
    printf("Sisestage soidude arv:\n");
    scanf("%d", &S);
    printf("Sisestage yhekordse pileti hind:(eur)\n");
    scanf("%f", &Y);
    printf("Sisestage paeva pileti hind:(eur)\n");
    scanf("%f", &D);
    printf("Sisestage kuukaardi hind:(eur)\n");
    scanf("%f", &K);
    }

    printf("Turist viibib linnas %d paeva ja teeb %d bussisoitu. \n", P, S);
    printf("Piletite hinnad:\n");
    printf("Yhekordne pilet: %.2f eurot \n", Y);
    printf("Paevapilet: %.2f eurot \n", D);
    printf("kuukaart: %.2f eurot \n", K);

    YK = Y * S;
    DK = P * D;

    printf("Yhekordsete piletite hind kokku: %.2f eurot \n", YK);
    printf("Paevapiletite hind kokku: %.2f eurot \n", DK);
    printf("========================================= \n");

    if(YK < DK && YK < K){
        printf("Soodsaim variant on yhekordsed piletid.");
    }
    else if(DK < YK && DK < K){
        printf("Soodsaim variant on paevapiletid.");
    }
    else if(YK > DK && DK > K){
        printf("Soodsaim variant on kuukaart.");
    }
    else if(YK == DK){
        printf("Yhekordsete piletite hind kokku on sama mis paevapiletite hind kokku. \n");
        printf("Voib valida suvalise yhe neist.");
    }
    else{
        printf("Error!");
    }

    return 0;
}
