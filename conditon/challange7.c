#include <stdio.h>

int main() {
    char caractere;

    // Demander à l'utilisateur d'entrer un caractère
    printf("Entrez un caractère : ");
    scanf("%c", &caractere);
    if(caractere>='A'&& caractere<='Z'){
    	if (caractere >= 65 && caractere <= 90) {
        printf("%c est une lettre majuscule.\n", caractere);
		}
	}
     else {
        printf("%c n'est pas une lettre majuscule.\n", caractere);
    }
    

    return 0;
}

