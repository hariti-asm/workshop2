/*Challenge 8 :*/
#include <stdio.h>
/*10, il est recalé. S’il a une moyenne entre 10 (inclus) et 12, 
il obtient la mention passable. S’il a une moyenne entre 12 (inclus) et 14, il obtient 
la mention assez bien. S’il a une moyenne entre 14 (inclus) et 16, il obtient la mention bien*/
int main() {
  float moy;
  float noteF,noteM,noteS,noteP;
  printf("donne nombre de note  :\n ");
   printf(" note F : ");
   scanf("%f",&noteF);
    printf(" note M : ");
   scanf("%f",&noteM);
   printf(" note S : ");
   scanf("%f",&noteS);
   printf(" note P : ");
   scanf("%f",&noteP);
   moy=(noteF+noteM+noteS+noteP)/4;
   printf("%\n",moy);
   printf("------------------------\n");
   if(moy>=0&&moy<=20){
   	 if(moy<10) printf("recalé");
     else if(moy>=10&&moy<=12)printf("passable");
     else if (moy>=12&&moy<14)printf("assez bien");
     else printf(" bien");
   }else printf("Erreur");
  
   

    return 0;
}

