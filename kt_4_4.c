#include <stdio.h>
#include <stdlib.h>

int randomArray[10][10];

int main()
{
	int sum = 0, max = 0;
	int i, j, rowMax;

	for (i = 0; i < 10; i++) {
		printf("%d. | ", i + 1);
		for (j = 0; j < 10; j++) {
			randomArray[i][j] = rand() % (100 - 1) + 1;
			printf("%d ", randomArray[i][j]);

			sum += randomArray[i][j];
		}

		if (sum > max) {
            max = sum;
            rowMax = i + 1;
        }

		printf(" | %d \n", sum);
		sum = 0;
	}

	printf("\nElementide suurim summa on reas nr. %d \n", rowMax);

	return 0;
}
