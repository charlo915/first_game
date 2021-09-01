#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int MAX = 100 ,MIN = 1;
int recommence = 0;
int NivDifficulte (int MAX);

int main()
{
    printf("Bienvenue ! \n");
    do {
        MAX = NivDifficulte (MAX);
    } while (MAX != 100 && MAX != 500 && MAX != 1000);

    do {
        if (recommence == 1){
            do {
                MAX = NivDifficulte (MAX);
            } while (MAX != 100 && MAX != 500 && MAX != 1000);
        }
        int nombreRechercher= 0;
        int compteur=0;
        srand(time(NULL));
        int nombreMystere = (rand() % (MAX - MIN +1 ))+ MIN;
        //printf("NombreMystere = %d \n",nombreMystere);
        //printf("MAX = %d \n",MAX);
        //printf("MIN = %d \n",MIN);
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
        if (recommence == 2){
            printf("Bonne journee et a bientot mon ami !\n");
        }
    }
    while (recommence == 1);

    return 0;
}

int NivDifficulte (int MAX){
    int niveauDifficulte = 0;
    printf("Veuillez choisir un niveau de difficulte \n");
    printf("1. Facile - entre 1 et 100\n");
    printf("2. Moyen - entre 1 et 500\n");
    printf("3. Difficile - entre 1 et 1000\n");
    printf("---------------------------\n");
    scanf ("%d",&niveauDifficulte);
    if (niveauDifficulte == 1 ){
        MAX = 100;
        printf("Vous avez choisi : Facile\n");
    } else if (niveauDifficulte == 2){
        MAX = 500;
        printf("Vous avez choisi : Moyen\n");
    } else if (niveauDifficulte == 3){
        MAX = 1000;
        printf("Vous avez choisi : Difficile\n");
    } else {
        printf("Mauvais choix de difficulte \n");
        printf("Choisie entre 1,2 ou 3 imbecile \n");
    }
        //printf("niveauDifficulte = %d \n",niveauDifficulte);
    getchar ();
    return MAX;
}
