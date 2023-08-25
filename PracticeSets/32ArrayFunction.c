#include<stdio.h>
void rtr(int *ptrr,int n);

int main(){
    int arr[]={12,34,45,65,78,89};
    rtr(&arr,6);
    return 0;
}

void rtr(int *ptrr,int n){
    for(int a=0; a<n; a++){
        printf("The value of %d is %d \n",a+1,*ptrr);
        ptrr++;
    }
}