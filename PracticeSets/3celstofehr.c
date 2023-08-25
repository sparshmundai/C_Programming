#include<stdio.h>

int main(){
    int cels,fehr;
    printf("Enter the temperature in celsius:");
    scanf("%d",&cels);
    fehr=cels*9/5+32;
    printf("The temperature in fehrenheit is %f \n",fehr);

    return 0;
}