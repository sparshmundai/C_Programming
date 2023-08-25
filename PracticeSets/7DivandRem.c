#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the Second number:");
    scanf("%d",&b);

    if(a>b){
        int cal;
        cal=a/b;
        printf("The value after divison is %d",cal);
    }
    else{
        float rem;
        rem=a%b;
        printf("The value after remainder is %f",rem);
    }
    return 0;
}