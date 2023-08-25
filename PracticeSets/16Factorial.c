#include<stdio.h>

int main(){
    int num,fact=1,counter=1;
    printf("Enter the number:");
    scanf("%d",&num);

    do{
        fact=fact*counter;
        counter++;
    }while(counter<=num);
    
    printf("%d",fact);
    return 0;
}