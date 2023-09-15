#include <stdio.h>
#include <stdlib.h>
//Challenge 2 :  
int main() {
    char n;
  
    printf("Enter un voyelle: ");
    scanf("%c", &n);  
    
        switch (n) {
            case 'a':
                printf("le %c est voyelle",n); 
                break;
            case 'e':
                printf("le %c est voyelle",n); 
                break;
            case 'i':
                 printf("le %c est voyelle",n); 
                break;
            case 'o':
                printf("le %c est voyelle",n); 
                break;
            case 'u':
                printf("le %c est voyelle",n); 
                break;
            case 'y':
                 printf("le %c est voyelle",n); 
                break;
            default:
                 printf(" %c n'est voyelle",n); 
        }
    return 0;
}
