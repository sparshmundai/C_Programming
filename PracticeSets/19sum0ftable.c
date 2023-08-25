#include<stdio.h>

int main(){
    int num=8,sum=0;

    //printf("Enter the number:");
    //scanf("%d",&num);

    for(int c=1;c<=num;c++){
        sum=sum+num*c;
    }
    printf("%d",sum);
    return 0;
}