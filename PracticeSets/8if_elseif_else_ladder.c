#include<stdio.h>

int main(){
    //Nielit grade system
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks<50){
        printf("Your Grade is F");
        printf("You are Failed");
    }
    else if(marks>=50 && marks<55){
        printf("Your Grade is D \n");
        printf("You are Passed");
    }
    else if(marks>=55 && marks<65){
        printf("Your Grade is C \n");
        printf("You are Passed");
    }
    else if(marks>=65 && marks<75){
        printf("Your Grade is B \n");
        printf("You are Passed");
    }
    else if(marks>=75 && marks<85){
        printf("Your Grade is A \n");
        printf("You are Passed");
    }
    else{
        printf("Your Grade is S \n");
        printf("You are Passed");
    }
    return 0;
}