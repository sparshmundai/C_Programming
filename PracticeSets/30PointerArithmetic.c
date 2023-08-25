#include<stdio.h>

int main(){
    float a=3.45;
    float *ptr=&a;
    // printf("The addres of a:%d \n",&a);
    // printf("The addres of a:%d \n",ptr);

    // printf("The Value of a:%d \n",a);
    // printf("The Value of a:%d \n",*(&a));
    // printf("The Value of a:%d \n\n",*ptr);

    printf("The addres of ptr:%d \n",ptr);
    ptr++;
    printf("The a                               ddres of ptr:%d \n",ptr);




    
    return 0;
}