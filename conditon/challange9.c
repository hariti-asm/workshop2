/*Challenge 9 :*/
#include <stdio.h>

int main() {
    char caractere;

    // Demander à l'utilisateur d'entrer un caractère
    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

    // Vérifier si le caractère est une lettre
    if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z')) {
        if (caractere >= 'a' && caractere <= 'z') {
            printf("%c est une lettre minuscule.\n", caractere);
        } else {
            printf("%c est une lettre majuscule.\n", caractere);
        }
    } else {
        printf("%c n'est pas une lettre de l'alphabet.\n", caractere);
    }

    return 0;
}

