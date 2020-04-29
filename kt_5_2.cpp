#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main()
{
	FILE *database;
	database = fopen("andmebaas.txt", "a");
	char valik;

	struct Human {
		char firstName[20], lastName[20];
		char Age[20], birthYear[20], Mass[20];
	};

	struct Human People;

	printf("Sisestage inimese eesnime: ");
	scanf("%s", &People.firstName);
	printf("Sisestage inimese perekonnanime: ");
	scanf("%s", &People.lastName);
	printf("Sisestage inimese vanust: ");
	scanf("%s", &People.Age);
	printf("Sisestage inimese synniaasta: ");
	scanf("%s", &People.birthYear);
	printf("Sisestage inimese kaalu: ");
	scanf("%s", &People.Mass);
	printf("\n");

	printf("%s %s %s %s %s \n\n", People.firstName, People.lastName, People.Age, People.birthYear, People.Mass);
	printf("Kas soovite lisada need andmed faili?\n\n");

	printf("Kui te vajutate klahvi  `j`, siis salvestate teie kirje faili ja valjute programmist\n klahvi `e` vajutamine ei lisa midagi faili ja valjub\n\n");
	scanf("%s", &valik);

	if (valik == 'j')
	{
		fprintf(database, "\n%s#%s#%s#%s#%s", People.firstName, People.lastName, People.Age, People.birthYear, People.Mass);
		//printf("Error: %s", strerror(errno));
		//system("pause");
	}
	else if (valik == 'e')
	{
		exit(0);
	}
	else
	{
		exit(0);
	}

	fclose(database);
	return 0;
}
