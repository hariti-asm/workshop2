#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Challenge 1: 
int main() {
    char n[100];
  int lenght;
    printf("Enter un nombre: ");
    scanf("%s", &n);  
  
    lenght=strlen(n)-1;
    
  for(int i=lenght;i>=0;i--){
   	printf("%c",n[i]);
	}

    return 0;
}
