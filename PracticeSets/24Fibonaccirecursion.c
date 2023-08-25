#include<stdio.h>
int fibo(int n);

int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    
    printf("The number is %d",fibo(number));
    return 0;
}

int fibo(int n){
    int result;
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        result=fibo(n-1)+fibo(n-2);
        return result;
    }
}