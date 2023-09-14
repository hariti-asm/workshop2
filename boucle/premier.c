#include<stdio.h>
#include<stdlib.h>
static int i;
int main(){
	int n,j=0;
	printf("donner un nombre :");
	scanf("%d",&n);
  for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            j = 1;
            break;
        }
    }
	  
        if (j == 0) {
            printf("%d est un nombre premier.\n", n);
        } else {
            printf("%d n'est pas un nombre premier.\n", n);
        }
    
	  
	return 0;
}
