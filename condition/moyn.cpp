#include <stdio.h>
#include <stdlib.h>

int main() {
	float n1,n2,n3,n4;
    float moy;
    
    printf("Entrez note1 note2 note3 note4:  \n");
   scanf("%f%f%f%f", &n1, &n2,&n3,&n4);
   
   moy=(n1+n2+n3+n4)/4;
   
   
   if(moy<10){
   	 printf(" il est recalé.");
   }else if(moy>=10 && moy<=12){
   	  printf(" mention passable");
   }else if(moy>= 12 && moy<= 14){
   	  printf("mention assez bien.");
   }else if(moy>= 14 && moy<= 16){
   	   printf(" mention bien");
   }else{
   	 printf("mention très bien");
   }
   
   printf("\nmoyenne est: %f",moy);
   
 
    
}

