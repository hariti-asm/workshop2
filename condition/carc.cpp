#include <stdio.h>
#include <stdlib.h>

int main() {
	char c;
   
   printf("entrer un charactaire:\n");
   scanf("%c",&c);
   
  if(c>='a' && c<='z'||c>='A'&& c<='Z'){
    if(c>=65&& c<=90){
   	printf("%c est  MAj", c);
  
   }else{
   	printf("%c est  MIN.", c);
    
   }
  }
   
   return 0;
}

