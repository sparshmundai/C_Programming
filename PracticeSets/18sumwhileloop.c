#include<stdio.h>

int main(){
    int num,sum=0,count=1;
    printf("Enter the number:");
    scanf("%d",&num);
    while(count<=num){
        sum=sum+count;
        count++;
    }
    printf("The sum is %d",sum);
    return 0;
}