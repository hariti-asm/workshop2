#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Challenge 4 :   */
int main(){
	float a,b,c,delta,x,x1,x2;
	  printf("donner un nombre :");
	  scanf("%f",&a);
	   printf("donner un nombre :");
	  scanf("%f",&b);
   printf("donner un nombre :");
	  scanf("%f",&c);
	  delta=pow(-b,2)-4*a*c;
	 if(delta<0)  printf("Pas de soultion ");
    
	else if(delta==0){
    	x=-b/(2*a);
    	printf("le x :%f",x);
	                 }
    else{
    	x1=(-b-sqrt(delta))/(2*a);
    		x2=(-b+sqrt(delta))/(2*a);
    			printf("le x1 :%f et  x2 :%f",x1,x2);
       	}
	

	return 0;
}
