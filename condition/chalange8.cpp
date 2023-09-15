#include <stdio.h>
#include <stdlib.h>

int main() {
	char c;
   
   printf("Entrez un alphabet: \n");
   scanf("%c", &c);
   
   
   if(c>=65&& c<=90){
   	printf("%c est  MAj", c);
  
   }else{
   	printf("%c n'est pas  MAj.", c);
    
   }
   return 0;
}

