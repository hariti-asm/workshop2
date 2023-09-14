#include<stdio.h>
#include<stdlib.h>
static int i;
int main(){
	int n,b=0;
	printf("donner un nombre :");
	scanf("%d",&n);
     while (n > 0) {
        b = (b * 10) + (n % 10);
        n /= 10;
    }
	printf( "%d",b); 
    
    
	  
	return 0;
}
