#include <stdio.h>
#include <stdlib.h>
//Challenge 1:   les nombres paire et impaire
int main() {
    int n,calc;
  
    printf("Enter n: ");
    scanf("%d", &n);  
    calc=n%2;
    if(calc==0){
    	printf(" ce nombre est paire ");
	}
    else{
    	printf( " ce nombre est impaire");
	}

    return 0;
}
