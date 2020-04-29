#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 4

int A[ROWS][COLS], B[ROWS][COLS], C[ROWS][COLS];


void valjastamine(int A[ROWS][COLS]) {
	int i, j;

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	printf("------------\n");
}

int vordlus(int A[ROWS][COLS], int B[ROWS][COLS]) {
	int i, j, sumA = 0, sumB = 0;

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			sumA += A[i][j];
			sumB += B[i][j];
		}
	}

	if (sumA > sumB)
        return 1; // A > B
	else
        return 0; // B > A
	}

int main()
{
	int i, j;

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			A[i][j] = rand() % 101;
			B[i][j] = rand() % 101;
			C[i][j] = rand() % 101;
		}
	}
	valjastamine(A);
	valjastamine(B);
	valjastamine(C);

	if(vordlus(A, B) == 1){
		printf("\nElementide summa poolest on koige suurem: \n\n");
		if(vordlus(A, C) == 1)
			valjastamine(A);
		else if(vordlus(A, C) == 0)
			valjastamine(C);
	}
	else if(vordlus(A, B) == 0) {
		printf("\nElementide summa poolest on koige suurem: \n\n");
		if(vordlus(B, C) == 1)
			valjastamine(B);
		else if(vordlus(B, C) == 0)
			valjastamine(C);
	}


	return 0;
}
