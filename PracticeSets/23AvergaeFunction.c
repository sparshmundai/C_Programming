#include<stdio.h>
float avrg(int a,int b,int c);

int main(){
    int math,science,hindi;
    printf("Enter the marks of maths:");
    scanf("%d",&math);
    printf("Enter the marks of science:");
    scanf("%d",&science);
    printf("Enter the marks of hindi:");
    scanf("%d",&hindi);
    printf("The avergae of 3 subjects is %f",avrg(math,science,hindi));
    return 0;
}

float avrg(int a,int b,int c){
    float total,result;
    total=a+b+c;
    result=total/3;
    return result;    
}