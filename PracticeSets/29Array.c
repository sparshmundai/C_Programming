#include<stdio.h>

int main(){
    int a;
    printf("How many numbers u want to insert:");
    scanf("%d",&a);
    int app[a];
    for(int b=0;b<5;b++){
        scanf("%d",&app[b]);
    }
    for(int c=0;c<5;c++){
        printf("%d \n",app[c]);
    }



    return 0;
}