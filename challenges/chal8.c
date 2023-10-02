#include <stdio.h>

int main() {
    float moyenne;

    printf("Entrez la moyenne de l'élève : ");
    scanf("%f", &moyenne);

    if (moyenne < 10) {
        printf("L'élève est recalé.\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("L'élève a obtenu la mention passable.\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("L'élève a obtenu la mention assez bien.\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("L'élève a obtenu la mention bien.\n");
    } else if (moyenne >= 16) {
        printf("L'élève a obtenu la mention très bien.\n");
    }

    return 0;
}
