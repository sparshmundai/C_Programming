#include<stdio.h>

int main(){
    int p,r,t,si;
    
    //Principle
    printf("Enter the value of principle:");
    scanf("%d",&p);

    //Rate
    printf("Enter the rate:");
    scanf("%d",&r);

    //time
    printf("Enter the time:");
    scanf("%d",&t);

    //Result
    si=p*r*t/100;
    printf("The simple interest is %d \n",si);

    return 0;
}