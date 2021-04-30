#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int MAX = 100, MIN = 1;
int recommence =0;
int niveauDifficulte = 0;
int NivDifficulte (int niveauDifficulte);

int main()
{
    printf("Bienvenue ! \n");
    do {
        niveauDifficulte = NivDifficulte (niveauDifficulte);
    } while (niveauDifficulte != 1 && niveauDifficulte != 2 && niveauDifficulte != 3);

    do {
        if (recommence == 1){
            do {
                niveauDifficulte = NivDifficulte (niveauDifficulte);
            }while (niveauDifficulte != 1 && niveauDifficulte != 2 && niveauDifficulte !=3);
        }
        int nombreRechercher= 0;
        int compteur=0;
        srand(time(NULL));
        int nombreMystere = (rand() % (MAX - MIN +1 ))+ MIN;
       /* printf("NombreMystere = %d \n",nombreMystere);
        printf("MAX = %d \n",MAX);
        printf("MIN = %d \n",MIN);*/
            do
            {
            printf("Quel est le nombre ? ");
            scanf("%d",&nombreRechercher);
            compteur++;
            if (nombreMystere < nombreRechercher){
                printf("C'est moins ! \n");
            }else if (nombreMystere > nombreRechercher){
                printf("C'est plus ! \n");
            }else{
                printf("---------------------------\n");
                printf("Bravo, vous avez trouve le nombre mystere\n");
                printf("Vous avez fait %d tentatives \n",compteur);
            }
        }while (nombreRechercher !=nombreMystere);
        printf("---------------------------\n\n");
        printf("Voulez-vous recommancer ? \n");
        printf("1. Oui\n");
        printf("2. Non\n");
        printf("---------------------------\n\n");
        scanf ("%d",&recommence);
    }
    while (recommence == 1);

    return 0;
}

int NivDifficulte (int niveauDifficulte){
    printf("Veuillez choisir un niveau de difficulte \n");
    printf("1. Facile - entre 1 et 100\n");
    printf("2. Moyen - entre 1 et 500\n");
    printf("3. Difficile - entre 1 et 1000\n");
    printf("---------------------------\n");
    scanf ("%d",&niveauDifficulte);
    if (niveauDifficulte == 1 ){
        MAX = 100;
        printf("Facile\n");
    } else if (niveauDifficulte == 2){
        MAX = 500;
        printf("Moyen\n");
        printf("Moyen\n");
    } else if (niveauDifficulte == 3){
        MAX = 1000;
        printf("Difficile\n");
    } else {
        printf("Mauvais choix de difficulte \n");
        printf("Choisie entre 1,2 ou 3 imbecile \n");
    }
        //printf("niveauDifficulte = %d \n",niveauDifficulte);
    getchar ();
    return niveauDifficulte;
}
