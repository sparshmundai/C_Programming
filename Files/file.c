#include<stdio.h>

int main(){
    FILE *f;
    int num;
    int num2;
    f=fopen("firt.txt","r");

    if(f == NULL){
        printf("The file doesn't exist");
    }
    else{
        fscanf(f,"%d",&num);
        printf("%d",num);
        fscanf(f,"%d",&num2);
        printf("\n %d",num2);
        fclose(f);
    }
    return 0;
}