#include <stdio.h>

int main() {
    int nombre;
    int estPremier = 1; 

    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    if (nombre <= 1) {
        estPremier = 0;
    } else {
 
        for (int diviseur = 2; diviseur * diviseur <= nombre; diviseur++) {
            if (nombre % diviseur == 0) {
                estPremier = 0; 
                break;
      
            }
        }
    }

    
    if (estPremier) {
        printf("%d est un nombre premier.\n", nombre);
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);
    }

    return 0;
}
