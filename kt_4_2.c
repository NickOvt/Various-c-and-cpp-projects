#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N = rand() % 2001 - 1000, i = 0;
    int X;

	printf("Alustame mangu \n");

	while (i < 11) {
		printf("\nSisestage uus arv: \n");
		scanf("%d", &X);
		if (X < N) {
			printf("Peidetud arv on suurem \n");
			i++;
		}
		else if (X > N) {
			printf("Peidetud arv on vahem \n");
			i++;
		}
		else if (X == N) {
			printf("Peidetud arv on %d \n", N);
			return 0;
		}
	}

	printf("\nTe kaotasite. Peidetud arv oli %d \n", N);

	return 0;
}
