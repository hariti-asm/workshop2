#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, choix;

 //                                       Entre l'anne
   printf("Entrez l'anne' \n");
   scanf("%d", &a);
   
 //                                       Conditonal
   if (a!=0){
 //                                       conversion 
   	    printf("Menu de conversion :\n");
        printf("counvertir:1.en mois\n2. en jours\n3. en heures\n4.en minutes\n5.en secondes\n");
        printf("Entrez votre choix: ");
       scanf("%d", &choix);
//                                        Switch
		 switch (choix) {
        case 1:
            printf("%d an(s) equivaut à %d mois\n", a, a * 12);
            break;
        case 2:
            printf("%d an(s) equivaut a %d jours\n", a, a * 365);
            break;
        case 3:
            printf("%d an(s) equivaut a %d heures\n", a, a * 365 * 24);
            break;
        case 4:
            printf("%d an(s) euivaut a %d minutes\n", a, a * 365 * 24 * 60);
            break;
        case 5:
            printf("%d an(s) equivaut a %d secondes\n", a, a * 365 * 24 * 60 * 60);
            break;
        default:
            printf("Choix %d invalide\n",choix);
    }
//    
   }else{
   	printf("le resultat de n'importe quelle transformation a 0 est 0'");
   }
   
   
   
   return 0;
}

