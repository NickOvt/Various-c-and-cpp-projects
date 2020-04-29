#include <stdio.h>
#include <stdlib.h>

int main()
{

    int k, x;

    printf("Sisestage paeva numbri k: \n");
    scanf("%d", &k);

    x = k % 7;

    if(k >= 1 && k <= 365){

        if(x == 0){
            printf("Aasta %d. paev on Pyhapaev", k);
        }
        else if(x == 1){
            printf("Aasta %d. paev on Esmaspaev", k);
        }
        else if(x == 2){
            printf("Aasta %d. paev on Teisipaev", k);
        }
        else if(x == 3){
            printf("Aasta %d. paev on Kolmapaev", k);
        }
        else if(x == 4){
            printf("Aasta %d. paev on Neljapaev", k);
        }
        else if(x == 5){
            printf("Aasta %d. paev on Reede", k);
        }
        else if(x == 6){
            printf("Aasta %d. paev on Laupaev", k);
        }
        else{
            printf("Error!");
        }

    }
    else{
        printf("Aastas ei saa olla 0 paeva ja see ei ole liigaasta( 366 paeva)");
    }

    return 0;
}
