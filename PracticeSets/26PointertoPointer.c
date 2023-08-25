#include<stdio.h>

int main(){
    int a=10;
    
    //Pointer
    int *b;
    b=&a;

    //Pointer to Pointer
    int **c;
    c=&b;

    //All about a
    printf("Value of a is %d \n",a);
    printf("Value of a is %d \n",*(&a));
    printf("Address of a is %d \n",*b);
    printf("Address of a is %d \n",&a);
    printf("Address of a is %d \n",b);

    //All about b
    printf("Address of b is %d \n",&b);
    printf("Value of b is %d \n",b);

    //All about c
    printf("Address of c is %d \n",&c);
    printf("Value of c is %d \n",c);
    printf("Value of c is %d \n",**c);





    return 0;
}