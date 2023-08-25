#include<stdio.h>

int main(){
    int num,count=1;

    printf("Enter the number:");
    scanf("%d",&num);

    do{
        printf("The number is %d\n",count);
        count+=1;
    }while(count<=num);

    return 0;
}