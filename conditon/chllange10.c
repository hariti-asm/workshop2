/*Challenge 10 :*/
#include <stdio.h>

int main() {
    int m,j,a;

    // Demander à l'utilisateur d'entrer un caractère
    printf("Entrez un jours : ");
    scanf("%d", &j);
   printf("Entrez un anne : ");
    scanf("%d", &a);
     printf("Entrez un moins : ");
    scanf("%d", &m);
    if(j>0 && j<32){
    	 switch(m){
   	case 1: printf(" %d - janvier -%d",j,a);break;
   	case 2: printf(" %d - fervrier -%d",j,a);break;
   	case 3: printf(" %d - mars -%d",j,a);break;
   	case 4: printf(" %d - avril -%d",j,a);break;
   	case 5: printf(" %d - mai -%d",j,a);break;
	case 6: printf(" %d - juin -%d",j,a);break;
	case 7: printf(" %d - juillet -%d",j,a);break;
	case 8: printf(" %d - aout -%d",j,a);break;
	case 9: printf(" %d - septembre-%d",j,a);break;
	case 10: printf(" %d - Octobre -%d",j,a);break;
	case 11: printf(" %d - novembre -%d",j,a);break;
	case 12: printf(" %d - decembre -%d",j,a);break;
	default : printf("Erreur"); break;
   }}
   else{
   	printf("Erreur");
   }
	
  

    return 0;
}

