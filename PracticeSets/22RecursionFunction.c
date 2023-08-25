#include<stdio.h>
int fact(int n);

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fact(n));
    return 0;
}

int fact(int n){
    int f;
    if(n==0 || n==1){
        return 1;
    }
    else{
        f=n*fact(n-1);
        return f;
    }
}