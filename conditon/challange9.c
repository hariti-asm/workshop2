/*Challenge 9 :*/
#include <stdio.h>

int main() {
    char caractere;

    // Demander � l'utilisateur d'entrer un caract�re
    printf("Entrez un caract�re : ");
    scanf("%c", &caractere);

    // V�rifier si le caract�re est une lettre
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

