#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
   
   printf("Entrez un nomber: \n");
   scanf("%d", &n);
   if(n>0){
   	printf("le nombre est positif");
   }
   
   else if(n<0){printf("le nombre est   negatif");
   }
   else{
   	printf(" le nombre est égal à zéro.");
   }
   
   
   
   
   return 0;
}

