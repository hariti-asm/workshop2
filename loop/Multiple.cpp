#include <stdio.h>
#include <stdlib.h>
//Challenge 1:   les nombres paire et impaire
int main() {
    int n,calc;
  
    printf("Enter un nombre: ");
    scanf("%d", &n);  
    for(int i=0;i<=10;i++){
    	printf("%d * %d =%d\n",n,i,n*i);
	}

    return 0;
}
