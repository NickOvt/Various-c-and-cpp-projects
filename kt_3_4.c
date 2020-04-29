#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, F;

    printf("Sisestage X vaartus: (taisarv) \n");
    scanf("%d", &X);

    if(X <= 0){
        F = 0;

        printf("Funktsiooni vaartus kohal X (%d) on %d.", X , F);
    }
    else if(X > 0 && X <= 7){
        F = X * X;

        printf("Funktiooni vaartus kohal X (%d) on %d.", X, F);
    }
    else if(X > 7){
        F = 3 * X + 51;

        printf("Funktiooni vaartus kohal X (%d) on %d.", X , F);
    }
    else{
        printf("Error!");
    }



    return 0;
}
