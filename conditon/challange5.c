#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Challenge 5 :   */
int main(){
	int a,m,j,h,mi,s;
	int choix;
	printf("donnes anne : ");
	scanf("%d",&a);
	printf("Menu\n");
   printf("1-mois \n");
    printf("2-jours \n");
     printf("3-herue \n");
      printf("4-seconde \n");
		printf("donnes choix : ");
	scanf("%d",&choix);
	switch(choix){ 

		case 1: 	m= a * 12; 
		 printf("MOIS :%d\n",m);break;
		 	case 2: 	 j= a * 365;
		 printf("jours :%d\n",j);break;
		 	case 3: h= a*365 * 24; 
		 printf("herue :%d\n",h);break;
		 	case 4: 	mi=  a*365*24* 60; 
		 printf("minutes :%d\n",m);break;
			case 5: s= a*365*24* 60 * 60;
		  printf("seconde :%d\n",s);break;
		  default : printf("Message error"); break;
	}

   
    


 

	return 0;
}
