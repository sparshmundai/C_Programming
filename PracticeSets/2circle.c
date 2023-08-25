#include<stdio.h>

int main(){
    float pi=3.14;
    int r;
    //Area of circle
    printf("The value of pi is %f \n",pi);
    printf("Enter the value of r:");
    scanf("%d",&r);
    printf("The area of circle is %f \n\n\n",pi*(r*2));

    int rr,h;
    //Area of cylinder
    printf("The value of pi is %f \n",pi);
    printf("Enter the value of r:");
    scanf("%d",&rr);
    printf("Enter the value of h:");
    scanf("%d",&h);
    printf("The area of cylinder is %f",pi*(r*2)*h);
    return 0;
}