#include<stdio.h>

int main(){
    int a;
    printf("How Many students you want to enter:");
    scanf("%d",&a);
    int ar[a];
    int* ptr=&ar;

    for(int c=0;c<4;c++){
        printf("Enter the marks of student %d:",c+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int c=0;c<4;c++){
        printf("The marks of student %d is %d \n",c+1,ar[c]);
    }
    return 0;
}