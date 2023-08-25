#include<stdio.h>
#include<string.h>

struct employees{
    int code;
    int salary;
    char name[30];
};

int main(){

    struct employees e1,e2,e3;
    printf("Enter the code of e1:");
    scanf("%d",&e1.code);
    printf("Enter the salary of e1:");
    scanf("%d",&e1.salary);
    printf("Enter the Name of e1:");
    scanf("%d",&e3.name);

    printf("Enter the code of e2:");
    scanf("%d",&e2.code);
    printf("Enter the Salary of e2:");
    scanf("%d",&e2.salary);
    printf("Enter the code of e2:");
    scanf("%d",&e3.name);

    printf("Enter the code of e3:");
    scanf("%d",&e3.code);
    printf("Enter the Salary of e3:");
    scanf("%d",&e3.salary);
    printf("Enter the code of e3:");
    scanf("%d",&e3.name);
    return 0;
}