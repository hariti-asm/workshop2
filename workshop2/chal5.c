#include <stdio.h>

int main() {
    int nombre, inverse = 0;

    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    while (nombre > 0) {
        int chiffre = nombre % 10;  // Obtenez le dernier chiffre
        inverse = inverse * 10 + chiffre;
        nombre /= 10;  // Supprimez le dernier chiffre
    }

    printf("L'entier inversé est : %d\n", inverse);

    return 0;
}