#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double S,Y,P,T,K;

    printf("Sisestage laenusumma eurodes: \n");
    scanf("%lf",&S);

    printf("Sisestage laenuperiood aastades: \n");
    scanf("%lf",&Y);

    printf("Sisestage intressimaar protsentides: \n");
    scanf("%lf",&P);

    K = (S * (P/100/12)) / (1 - (pow(1 + (P/100/12),(-Y*12)) ));
    T = K * Y * 12;

    printf("Laenusumma %.2lf eurot ja %.2lf%% intressimaaraga te peate maksma %.2lf eurot kuus %.2lf aastat. Ja kokku maksate pangale %.2lf eurot.",S,P,K,Y,T);

    return 0;
}



/*Kirjutada programmi, mis küsib kasutajalt kolm numbri: laenusumma S eurodes, laenuperiood Y aastades ja laenuprotsendid P (intressimäär - aastaprotsendid), ja väljastab:

    tagasimakstav kogu summa T eurodes. [1p]
    kuumakse K eurodes. [2p]

Küsida:

“Sisestage laenusumma eurodes:” ja sisestada järgmisel real.
“Sisestage laenuperiood aastades:” ja sisestada järgmisel real.
“Sisestage intressimäär protsentides:” ja sisestada järgmisel real.
[1p - õige vormistus]

Väljastada kujul:

“Laenusummaga S eurot P intressimääraga te peate maksma K eurot kuus Y aastat. Ja kokku maksate pangale T eurot.”
[1p - õige väljund]
[1p - Iga summa väljastada ekraanile täpsusega kaks kohta peale koma]

Vihje:

K = (S * (P/100/12)) / (1 - (1 + (P/100/12))^(-Y*12) )
T = K * Y * 12

Sümbol ^ tähendab astendamist.
Siin saate testida, et teie programm annab õiged vastused (valige "Laenu kuumakse"):
http://www.kalkulaator.ee/?lang=1&page=2
*/
