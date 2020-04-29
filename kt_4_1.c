#include <stdio.h>
#include <stdlib.h>

int P;

int main()
{
    int i, flag = 0;

    printf("Sisestage arv: \n");
    scanf("%d", &P);

    if(P <= 1){
        printf("%d ei ole algarv! \n", P);
        return 0;
    }

    for(i = 2; i <= P / 2; i++){
        if((P % i) == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("Arv %d on algarv \n", P);
    }
    else{
        printf("Arv %d pole argarv ning jagub arvudega: ", P);
        for(i = 1; i <= sqrt(P); i++){
            if(P%i == 0){
                if( P / i == i)
                    printf("%d ", i);
                else
                    printf("%d %d ", i , P/i);
            }
        }
    }

    return 0;
}
