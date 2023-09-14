#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, s1, s2;

    printf("Entrez le coefficient a : ");
    scanf("%lf", &a);
    printf("Entrez le coefficient b : ");
    scanf("%lf", &b);
    printf("Entrez le coefficient c : ");
    scanf("%lf", &c);

    // Calculer le delta (b^2 - 4ac)
    delta = b * b - 4 * a * c;

    // Vérifier si le delta est positif, nul ou négatif
    if (delta > 0) {
        // Deux racines reeles
        s1 = (-b + sqrt(delta)) / (2 * a);
        s2 = (-b - sqrt(delta)) / (2 * a);
        printf("Les deux racines réelles distinctes sont : %.2lf et %.2lf\n", s1, s2);
    } else if (delta == 0) {
        // Une seul racine réelle 
        s1 = -b / (2 * a);
        printf("Il y a une racine réelle unique : %.2lf\n", s1);
    } else {
        // Pas de racines de solution (racines complexes)
        double reelPartie = -b / (2 * a);
        double imaginairePartie = sqrt(-delta) / (2 * a);
        printf("Les racines sont complexes : %.2lf + %.2lfi et %.2lf - %.2lfi\n", reelPartie, imaginairePartie, reelPartie, imaginairePartie);
    }

    return 0;
}
