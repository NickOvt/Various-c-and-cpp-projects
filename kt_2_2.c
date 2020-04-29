#include <stdio.h>
#include <stdlib.h>

int main()
{
    float B, T ,N;

    printf("Mis on teite brutopalk eurodes?\n");
    scanf("%f",&B);

    T = B * (1+0.33+0.008);

    N = (B*(1-0.016-0.02)-180) * (1-0.20) + 180;

    if(B >= 470)
    {
        printf("Kui tootaja brutopalk on %.3f eurot, siis tooandja maksab %.3f eurot ja tootaja saab katte puhtalt %.3f eurot\n",B,T,N);
    }
    else
    {
        printf("Offitsaalne palk ei saa olla alla miinimumi!\n");
    }

    return 0;
}



 /*[5p.] PALGAKALKULAATOR 2017

Kirjutada programmi, mis küsib kasutajalt tema brutopalga B (aastal 2017 miinimumpalk on 470 eurot, ehk arvestada sellega et kasutaja alati sisestab B >= 470), ja väljastab:

    summa T, mida tööandja maksab. [1p]
    netopalk N, mida töötaja saab kätte palgapäeval. [1p]

Netopalk N arvutada 2017 aasta reeglite järgi - maksuvaba tulu on 180 eurot, töötaja töötuskindlustusmakse on 1.6%, kogumispensioon (II sammas) on 2%.

Tööandja kulu T samuti arvutada 2017 aasta reeglite järgi - sotsiaalmaks on 33% ja tööandja töötuskindlustusmakse on 0.8%

Küsida:

“Mis on teie brutopalk eurodes?” ja sisestada järgmisel real.
[1p - õige vormistus]

Väljastada kujul:

“Kui töötaja brutopalk on B eurot, siis tööandja maksab T eurot ja töötaja saab kätte puhtalt N eurot.”
[1p - õige väljund]
[1p - Iga summa väljastada ekraanile täpsusega kolm kohta peale koma]

Vihje:

T = B * (1+0,33+0,008)

N = (B*(1-0,016-0,02)-180) * (1-0,20) + 180
*/
