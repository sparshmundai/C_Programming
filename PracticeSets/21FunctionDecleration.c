#include<stdio.h>
int addition(int a,int b);

int main(){
    int num1,num2;
    printf("Enter number first:");
    scanf("%d",&num1);
    printf("Enter number Second:");
    scanf("%d",&num2);
    printf("The sum is %d",addition(num1,num2));
    return 0;
}

int addition(int a,int b){
    int result=a+b;
    return result;
}