#include <stdio.h>

int main() {
    int jour, mois, annee;

    // Demander à l'utilisateur d'entrer une date au format "jj/mm/aaaa"
    printf("Entrez une date au format jj/mm/aaaa : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    // Tableau de chaînes de caractères pour les noms des mois
    // pointeur vers un string
    char* mois[12] = {
        "Janvier", "Février", "Mars", "Avril", "Mai", "Juin",
        "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"
    };

    // Vérifier si le mois est valide (entre 1 et 12)
    if (mois >= 1 && mois <= 12) {
        // Afficher la date sous le format demandé
        // bcz month starts from 0
        printf("%d-%s-%d\n", jour, mois[mois - 1], annee);
    } else {
        printf("Mois invalide.\n");
    }

    return 0;
}
