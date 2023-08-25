#include<stdio.h>

int main(){
    int no;
    printf("Enter the marks:");
    scanf("%d",&no);

    if(no<60){
        printf("F");
    }
    else if(no>=60 && no<70){
        printf("D");
    }
    else if(no>=70 && no<80){
        printf("C");
    }
    else if(no>=80 && no<90){
        printf("B");
    }
    else{
        printf("A");
    }
    return 0;
}