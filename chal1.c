#include<stdio.h>

int main(){
    int a;
    printf("enter a number ");

    scand("%d",&a);
    if ( a%2==0){

        printf("the %d is pair number" , a);
    } else {

        printf("the %d is not  pair number" , a);

    }
}