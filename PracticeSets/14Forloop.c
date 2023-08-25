#include<stdio.h>

int main(){
    int a;
    for(a=5; a>0; a--){
        if(a==3){
            continue;
        }
        printf("%d \n",a);
    }
    return 0;
}