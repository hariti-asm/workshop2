#include<stdio.h>
#include<stdlib.h>
/*Challenge 3 :   */
int main(){
	int n,m,s,t;
	  printf("donner un nombre :");
	  scanf("%d",&n);
	   printf("donner un nombre :");
	  scanf("%d",&m);
	   
	  if(n>0 && m>0){
	  	s=n+m;
	  if(n==m){  t=s*3;
	  	  printf(" triple :%d",t);    
	   }
	  else {
	 	
	    printf(" somme :%d",s); 
	  }	 
	  }
	

	return 0;
}
