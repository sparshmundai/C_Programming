#include<stdio.h>

int main(){
    int num,cnt,prime=0;
    printf("Enter the num:");
    scanf("%d",&num);

    for(cnt=2;cnt<=num;cnt++){
        if(num%cnt==0){
            prime=1;
            printf("The %d is not a prime number",num);
            break;
        }
        else{
            printf("The %d is prime",num);
            break;
        }
    }
    
    return 0;
}