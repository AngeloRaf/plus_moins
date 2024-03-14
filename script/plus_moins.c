// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

void plus_moins(int choix){
    srand(time(NULL)); 
    int valeur_a_trouver = rand() % 100;
    int compteur = 0;
    do{
        compteur++;
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
    printf("le nombre de tentative est %d \n", compteur);
}   
int main() {
    
    printf("choisissez une valeur : \n");
    int choix;
    scanf("%d", &choix);
    
    plus_moins(choix);

    return 0;
}
