#include<stdio.h>
#include<string.h>

struct employee{
    int empcode;
    int salary;
    int comp;
    char name[20];
};

int main(){
    struct employee emp;
    emp.empcode=1212100;
    emp.salary=23000;
    emp.comp=23;
    strcpy(emp.name,"Sparsh");

    printf("%d \n",emp.empcode);
    printf("%d \n",emp.salary);
    printf("%d \n",emp.comp);
    printf("%s",emp.name);




    return 0;
}
