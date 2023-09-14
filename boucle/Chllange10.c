#include <stdio.h>

int main() {
    int n, s = 0, max = 0;

    do {
        printf("Entrez un entier positif (ou 0 pour terminer) : ");
        scanf("%d", &n);

        if (n > 0 && n < 100) {
            s += n;

            if (n > max) {
                max = n;
            }
        }

    } while (n != 0);

    printf("La somme : %d\n", s);
    printf("Le maximum  : %d\n", max);

    return 0;
}

