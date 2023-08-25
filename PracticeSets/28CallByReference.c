#include<stdio.h>
int swap(int *a,int *b);

int main(){
    int a,b;
    printf("Enter the first value:");
    scanf("%d",&a);
    printf("Enter the first value:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("first is %d Second is %d",a,b);

    return 0;
}

int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}