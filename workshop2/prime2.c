#include <stdio.h>

int main() {
    int nombre;
    int estPremier = 1; // On suppose initialement que le nombre est premier

    // Demandez à l'utilisateur de saisir un entier
    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    if (nombre <= 1) {
        estPremier = 0;
    } else {
        // Vérifiez s'il existe un diviseur autre que 1 et lui-même
        for (int diviseur = 2; diviseur * diviseur <= nombre; diviseur++) {
            if (nombre % diviseur == 0) {
                estPremier = 0; // Le nombre a un diviseur autre que 1 et lui-même
                break;
      // pas besoin de continuer
            }
        }
    }

    // Affichez le résultat
    if (estPremier) {
        printf("%d est un nombre premier.\n", nombre);
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);
    }

    return 0;
}