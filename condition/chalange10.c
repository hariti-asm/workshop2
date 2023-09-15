#include<stdio.h>
#include<stdlib.h>
int main()
{
    int jour,annee;
	int mois;
    printf("entrer une date au format 15/09/2012:\n");
    scanf("%d/%d/%d",&jour,&mois,&annee);
      printf("%d-",jour);
    switch(mois)
    {
       case 1: printf("Janvier");
            break;
       case 2: printf("evrier");
            break;
       case 3: printf("Mars");
            break;
       case 4: printf("Avril");
            break;
       case 5: printf("Mai");
            break;
       case 6: printf("Juin");
            break;
      case 7: printf("Juillet");
            break;
       case 8: printf("Aout");
            break;
       case 9: printf("Septembre");
            break;
       case 10: printf("Octobre");
            break;
       case 11: printf("Novembre");
            break;
       case 12: printf("Decembre");
            break;
        default:
        	printf("le mois doit etre entre 1 et 12");
        	break;
    }
    printf("-%d\n",annee);
  
    return 0;
}
