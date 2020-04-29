#include <stdio.h>
#include <stdlib.h>

int sum, twenty, ten, five, two, one;

int main()
{
	int max = 58;
	twenty = ten = five = two = one = 0;

	printf("Sisestage summa, mida ostja saab tagasi \n");
	scanf("%d", &sum);

	if (sum <= max) {
		while (sum >= 20 && twenty < 1 && sum > 0) {
			sum = sum - 20;
			twenty++;
		}
		while (ten < 2 && sum > 0) {
			if (sum < 10) {
				break;
			}
			sum = sum - 10;
			ten++;
		}
		while (five < 3 && sum > 0) {
			if (sum < 5) {
				break;
			}
			sum = sum - 5;
			five++;
		}
		while (two < 1 && sum > 0) {
			if (sum < 2) {
				break;
			}
			sum = sum - 2;
			two++;
		}
		while (one < 1 && sum > 0) {
			if (sum < 1) {
				break;
			}
			sum = sum - 1;
			one++;
		}
		if (sum != 0 && sum > 0) {
			printf("Pole voimalik anda tapne raha tagasi \n");
		}
		else {
			printf("Tagasi tuleb anda: \n 20-eurosed: %d tk \n 10-eurosed: %d tk \n 5-eurosed: %d tk \n 2-eurosed: %d tk \n 1-eurosed: %d tk", twenty, ten, five, two, one);
		}
	}
	else {
		printf("Kassas pole piisavalt raha\n");
	}

	return 0;
}
