#include <stdio.h>

int main() {
    int annee, choix;
    
    printf("Entrez une année : ");
    scanf("%d", &annee);
    
    printf("Menu de conversion :\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("Entrez votre choix (1-5) : ");
    scanf("%d", &choix);
    
    switch (choix) {
        case 1:
            printf("%d an(s) équivaut à %d mois\n", annee, annee * 12);
            break;
        case 2:
            printf("%d an(s) équivaut à %d jours\n", annee, annee * 365);
            break;
        case 3:
            printf("%d an(s) équivaut à %d heures\n", annee, annee * 365 * 24);
            break;
        case 4:
            printf("%d an(s) équivaut à %d minutes\n", annee, annee * 365 * 24 * 60);
            break;
        case 5:
            printf("%d an(s) équivaut à %d secondes\n", annee, annee * 365 * 24 * 60 * 60);
            break;
        default:
            printf("Choix invalide\n");
    }
    
    return 0;
}
