#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, b,c, del;
	float x,x1,x2;
//                                                   entrer a , b et c
   printf("Entrez les nombres  a , b et c \n");
   scanf("%d%d%d", &a, &b,&c);
   
   printf(" %dx2+%dx+%d \n", a,b,c);
   
   del=pow(b,2)-4*a*c;
   
//                                                 Discriminant 
   printf("Discriminant du trin�me :  D=b2-4ac= %d\n", del);
                                                    
//                                                    conditional
   if (a!=0){
//   	                                                 calc delta
   	if(del<0){
   		printf("il n'y a pas de solution.");
	   }
	else if(del==0){
		x= -b/(2*a);
		printf("%f",x);
	
	}else{
		x1 = (-b-sqrt(del))/(2*a) ;
		x2= (-b+sqrt(del))/(2*a);
		
		printf("x1=%f et x2=%f",x1,x2);
	}
   }else{
    	printf("a doit etre >0");
   }
   
   
   
   return 0;
}

