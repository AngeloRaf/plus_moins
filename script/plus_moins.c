#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonction pour le premier niveau
void plus_moins(int choix){
    srand(time(NULL)); 
    int valeur_a_trouver = rand() % 100;
    int compteur = 0;
    
    do {
        compteur++;
        
        if(choix == valeur_a_trouver)
            printf("bingo \n");
        else if(choix < valeur_a_trouver)
            printf("plus \n");
        else
            printf("moins \n");
        
        if(choix != valeur_a_trouver) {
            printf("Réessayez : ");
            scanf("%d", &choix);
        }
        
        if(choix == valeur_a_trouver) {
            printf("bingo \n");
        }
    
    } while(choix != valeur_a_trouver);
    
    printf("Le nombre de tentatives est %d \n", compteur);
}

// Fonction pour le deuxième niveau
void plus_moins2(int choix){
    srand(time(NULL)); 
    int valeur_a_trouver = rand() % 100;
    int compteur = 0;
    int limite = 25;
    
    while (compteur < limite) {
        compteur++;
        
        if(choix == valeur_a_trouver)
            printf("bingo \n");
        else if(choix < valeur_a_trouver)
            printf("plus \n");
        else
            printf("moins \n");
        
        if(choix != valeur_a_trouver) {
            printf("Réessayez : ");
            scanf("%d", &choix);
        }
        
        if(choix == valeur_a_trouver) {
            printf("bingo \n");
        }
    }
    
    printf("Le nombre de tentatives est %d \n", compteur);
}

// Fonction pour le troisième niveau
void plus_moins3(int choix){
    srand(time(NULL)); 
    int valeur_a_trouver = rand() % 100;
    int tentative = 0;
    int limite = 10;
    int compteur = 0;
    while (tentative < limite){
    do{
        compteur++;
        tentative++;
        if(choix == valeur_a_trouver)
            printf("bingo \n");
        if(choix < valeur_a_trouver)
            printf("plus \n");
        if(choix > valeur_a_trouver)
            printf("moins \n");
        
        if(choix != valeur_a_trouver) {
            printf("Réessayez : ");
            scanf("%d", &choix);
            
        }
        if(choix == valeur_a_trouver) {
            printf("bingo \n");
        }
    
    }while(choix != valeur_a_trouver);
    
}
printf("le nombre de tentative est %d \n", compteur);
printf("vous etes null");
}

int main() {
    int niveau, choix;
    
    printf("C'est un jeu au choix, vous devez choisir un nombre entre 1 et 100\n");
    printf("Vous avez 3 niveaux : niveau 1, niveau 2 ou niveau 3\nFaites votre choix : ");
    
    scanf("%d", &niveau);
    
    switch (niveau) {
        case 1:
            printf("Choisissez une valeur : \n");
            scanf("%d", &choix);
            plus_moins(choix);
            break;
            
        case 2:
            printf("Choisissez une valeur : \n");
            scanf("%d", &choix);
            printf("Vous avez 25 tentatives \n");
            plus_moins2(choix);
            break;
            
        case 3:
            printf("Choisissez une valeur : \n");
            scanf("%d", &choix);
            printf("Vous avez 10 tentatives \n");
            plus_moins3(choix);
            break;
            
        default:
            printf("Niveau invalide. Veuillez choisir parmi les niveaux disponibles.\n");
    }

    return 0;
}
