#include<stdio.h>
float convert(float cels);

int main(){
    float temp;
    printf("Please enter temperature in celsius:");
    scanf("%f",&temp);

    printf("The temperature in Fehrenheit is %f",convert(temp));
    return 0;
}

float convert(float cels){
    float result;
    result=(cels*9)/5+32;
    return result;
}