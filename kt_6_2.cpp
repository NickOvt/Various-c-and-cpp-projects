#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bingoPilet[5][5];
int loositudNumbrid[40];
int i, j;

int angleGame(int bingoPilet[][5], int loositudNumbrid[]) {
	int k = 0;
	int angle1, angle2, angle3, angle4;
	angle1 = bingoPilet[0][0];
	angle2 = bingoPilet[0][4];
	angle3 = bingoPilet[4][0];
	angle4 = bingoPilet[4][4];

	for (i = 0; i < 40; i++) {
		if (angle1 == loositudNumbrid[i])
			k++;
		if (angle2 == loositudNumbrid[i])
			k++;
		if (angle3 == loositudNumbrid[i])
			k++;
		if (angle4 == loositudNumbrid[i])
			k++;
	}

	if (k == 4)
		return 1;
	else
		return 0;
}

int diagonalsGame(int bingoPilet[][5], int loositudNumbrid[]) {
	int maxCols = 5, ld = 0, rd = 0;
	int l;

	for (i = 0; i < 5; i++) {
		for (l = 0; l < 40; l++) {
			if (bingoPilet[i][i] == loositudNumbrid[l])
				ld++;
			if (bingoPilet[i][maxCols] == loositudNumbrid[l]) {
				maxCols--;
				rd++;
			}
		}
	}

	if (ld == 5 && rd == 5)
		return 1;
	else
		return 0;

	return 0;
}

int fullGame(int bingoPilet[][5], int loositudNumbrid[]) {
	int k = 0, isWin = 0;
	int l;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			for (l = 0; l < 40; l++) {
				if (bingoPilet[i][j] == loositudNumbrid[l]) {
					if (k == 24) {
						isWin = 1;
						break;
					}
					else
						k++;
				}
			}
		}
	}

	if (isWin == 1)
		return 1;
	else
		return 0;
}

int main()
{
	int number = 0;

	FILE *pilet, *fNumbrid;
	pilet = fopen("pilet.txt", "r");
	fNumbrid = fopen("numbrid.txt", "r");

	if (pilet == NULL || fNumbrid == NULL) {
		perror("Error while opening the file! \n");
	}

	for (i = 0; i < 5; i++) {
		for ( j = 0; j < 5; j++)
		{
			fscanf(pilet, "%d", &number);
			bingoPilet[i][j] = number;
		}
	}

	for (i = 0; i < 40; i++) {
		fscanf(fNumbrid, "%d,", &number);
		loositudNumbrid[i] = number;
	}

	if (angleGame(bingoPilet, loositudNumbrid) == 1)
		printf("Te voitsite nurkademangu\n------------------------\n");
	else
		printf("Te kaotasite nurkademangu\n-------------------------\n");

	if(diagonalsGame(bingoPilet, loositudNumbrid) == 1)
		printf("Te voitsite diagonaalidemangu\n-----------------------------\n");
	else
		printf("Te kaotasite diagonaalidemangu\n------------------------------\n");

	if(fullGame(bingoPilet, loositudNumbrid) == 1)
		printf("Te voitsite taismangu\n---------------------\n");
	else
		printf("Te kaotasite taismangu\n----------------------\n");

	printf("\n");

	return 0;
}
