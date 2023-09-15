#include <stdio.h>
#include <stdlib.h>
//Challenge 1: 
int main() {
    int n;
  
    printf("Enter un nombre: ");
    scanf("%d", &n);  
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-1;j++){
        	printf(" ");
        	
		}
		for(int j=0;j<(2*i-1);j++){
			printf("*");
			
		}
		printf("\n");
	 }

    return 0;
}
