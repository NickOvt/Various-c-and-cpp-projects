#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long decimalToBinary(int k){
    long long binaryNum = 0, i = 1;
    int remainder;

    while(k != 0){
        remainder = k % 2;
        k = k / 2;
        binaryNum += remainder * i;
        i *= 10;
    }
    return binaryNum;
}

int binaryToDecimal(long long k){
    int decNum = 0, i = 0, remainder;

    while(k != 0){
        remainder = k % 10;
        k = k / 10;
        decNum += remainder*pow(2,i);
        i++;
    }
    return decNum;
}

int main()
{
    int a;
    long long b;

    char valik;

    while(1){
        printf("Kas teisendust 'd' on vaja kahendsysteemist kymnedsysteemi(2->10)\nvoi teisendust 'b' on vaja kymnendsysteemist kahendsysteemi(10->2)?\n");
        printf("Kui vajutate 'v' siis valjute programmist\n");
        scanf("%s", &valik);

        if(valik == 'd' || valik == 'D'){
                printf("\nSisestage arv kahendsysteemis: ");
                scanf("%lld", &b);

                printf("Teisendatud arv kahendsysteemist kymnendsysteemi on: %d\n\n", binaryToDecimal(b));
        }
        else if(valik == 'b' || valik == 'B'){
                printf("\nSisestage arv kymnendsysteemis: ");
                scanf("%d", &a);

                printf("Teisendatud arv kymnendsysteemist kahendsysteemi on: %lld \n\n", decimalToBinary(a));
        }
        else if(valik == 'v' || valik == 'V')
            break;
        else
            break;
    }

    return 0;
}
