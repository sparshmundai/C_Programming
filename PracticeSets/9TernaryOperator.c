#include<stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    (num%2==0)? printf("%d is even",num): printf("%d is Odd",num);
    return 0;
}