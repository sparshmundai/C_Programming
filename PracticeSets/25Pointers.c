#include<stdio.h>

int main(){
    int a=10;
    int *p;
    p=&a;

    printf("The value of a is %d\n",a);
    printf("The value of a is %u\n",*(&a));
    printf("The value of a is %d\n",*p);
    printf("The Address of a is %u\n",&a);
    printf("The Address of a is %u\n",p);
    printf("The Address of pointer(p) is %u\n",&p);
    printf("The Value of pointer(p) is %u\n",*(&p));
    return 0;
}