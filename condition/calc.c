#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, somme;
   
   printf("Entrez deux nombers \n");
   scanf("%d%d", &a, &b);
   
   somme = a + b;
   if(a==b){
   	somme*=3;
   }
   
   printf("La somme est = %d\n", somme);
   
   
   
   return 0;
}

