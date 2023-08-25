#include<stdio.h>
int addition(int a,int b);

int main(){
    int a,b;
    printf("Enter the first value:");
    scanf("%d",&a);
    printf("Enter the first value:");
    scanf("%d",&b);
    printf("%d",addition(a,b));   
    return 0;
}

int addition(int a,int b){
    int result=a+b;
    a=34;
    b=45;
    return result;
}