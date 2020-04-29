#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;

    FILE *database;
    database = fopen("andmebaas.txt","r");
    char singleLine[180];
    char  strings[100][180];
    char valik;

    char leht[255];


    struct Human{
      char firstName[20], lastName[20];
      char Age[20], birthYear[20], Mass[20];
    };

    struct Human People[16];

        printf("Minu andmekogu sisaldab erinevaid andmeid inimese kohta. \nNagu naiteks: Nimi, Perekonnanimi, Synniaasta, Vanus ja Kaal\n\n");

    for(i; i <= 16;i++){
        /*printf("%d. \n", i);*/
        fgets(singleLine, 150, database);
        strcpy(strings[i],singleLine);

        char *pch = strtok(singleLine,"#");
        strcpy(People[i].firstName,pch);
        pch = strtok(NULL,"#");
        strcpy(People[i].lastName,pch);
        pch = strtok(NULL,"#");
        strcpy(People[i].Age,pch);
        pch = strtok(NULL,"#");
        strcpy(People[i].birthYear,pch);
        pch = strtok(NULL,"#");
        strcpy(People[i].Mass,pch);

        printf("%d. ", i);

        /*while(pch != NULL){
            printf(" %s", pch);
            pch = strtok(NULL,"#");
            //strcpy(People[i].lastName,pch);
            //pch = strtok(NULL,"#");
            //strcpy(People[i].Age,pch);
            //pch = strtok(NULL,"#");
            //strcpy(People[i].birthYear,pch);
            //pch = strtok(NULL,"#");
            //strcpy(People[i].Mass,pch);
        }*/

        printf("Eesnimi: %s\nPerekonnanimi: %s\nSynniaasta: %s \nVanus: %s \nKaalub kilogrammides: %s  \n",People[i].firstName,People[i].lastName,People[i].Age,People[i].birthYear,People[i].Mass);

        if(i % 5 == 0){
            //printf(" \n");
            printf("Klahvi 'j' vajutamine kuvab jargmist lehekylge (kui see on olemas)\nklahvi 'e' vajutamine kuvab eelmist lehekylge (kui see on olemas)\nklahvi 'v' vajutamine lopetab programmi taitumist\n");
            scanf("%s", &valik);
            if(valik == 'j'){
                continue;
            }
            else if(valik == 'e'){
                i--;
                printf("Eesnimi: %s\nPerekonnanimi: %s\nSynniaasta: %s \nVanus: %s \nKaalub kilogrammides: %s  \n",People[i].firstName,People[i].lastName,People[i].Age,People[i].birthYear,People[i].Mass);
                continue;
            }
            else if(valik == 'v'){
                break;
            }
            else{
                break;
            }
        }

    }
    fclose(database);
    return 0;
}
