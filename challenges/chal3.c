#include <stdio.h>

int main() {
    int a, b;
    int somme;

    // Demander à l'utilisateur de saisir les deux valeurs
    printf("Veuillez saisir la première valeur : ");
    scanf("%d", &a);

    printf("Veuillez saisir la deuxième valeur : ");
    scanf("%d", &b);

    somme = a + b;

    if (a == b) {
        somme *= 3;
    }

    printf("La somme des deux valeurs est : %d\n", somme);

    return 0;
}
