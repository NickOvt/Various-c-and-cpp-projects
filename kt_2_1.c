#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P, K, H, M, T;
    P = K =  M = T = 0.00; // Nullime muutujad igaks juhuks ara

    printf("Teekonna pikkus: (km)\n");
    scanf("%f",&P);
    printf("Tarbitud kutuse kogus: (l)\n");
    scanf("%f",&K);
    printf("Kutuse liitri hind: (eur)\n");
    scanf("%f",&H);

    T = K / (P / 100.00);
    M = K * H;

    printf("Olete soitnud %.2f kilomeetrit ning kulutanud %.2f liitrit kutust. Teie auto kutusekulu oli %.2f liitrit 100 kilomeetri kohta. Soidu maksumus oli %.2f eurot\n",P,K,T,M);

    return 0;
}

/*Kirjutada programmi, mis küsib kasutajalt teekonna pikkust kilomeetrides P, tarbitud kütuse kogust liitrites K ning kütuse liitri hinda eurodes H.
Programm peab väljastama kütuse tarbimist liitrites saja kilomeetri kohta T (l/100 km) ning tarbitud kütuse maksumust.

Küsida:

"Teekonna pikkus:" ja sisestada järgmisel real
"Tarbitud kütuse kogus:" ja sisestada järgmisel real
"Kütuse liitri hind:" ja sisestada järgmisel real

[1p - õige vormistus]

Väljastada kujul:

"Olete sõitnud P kilomeetrit ning kulutanud K liitrit kütust. Teie auto kütusekulu oli T liitrit 100 kilomeetri kohta. Sõidu maksumus oli M eurot".

[2p - õige väljund]
[1p - P, K, T ja M väljastada ekraanile täpsusega kaks kohta peale koma]

Vihje:

T = K / (P / 100)
M = K * H
*/



