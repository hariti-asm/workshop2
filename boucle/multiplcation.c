#include<stdio.h>
#include<stdlib.h>
static int i;
int main(){
	int n;
	printf("donner un nombre :");
	scanf("%d",&n);
	i=1;
	do{
		printf(" %d x %d = %d \n",n,i,n*i);
		i++;
	}while(i<=10);
	return 0;
}
