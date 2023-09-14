#include <stdio.h>

int main() {
    char caractere;

    // Demander à l'utilisateur d'entrer un caractère
    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

    // Vérifier si le caractère est une lettre majuscule en utilisant les valeurs ASCII
    if (caractere >= 'A' && caractere <= 'Z') {
        printf("Le caractère est une lettre majuscule.\n");
    } else {
        printf("Le caractère n'est pas une lettre majuscule.\n");
    }

    return 0;
}
