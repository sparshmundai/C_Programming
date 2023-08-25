#include <stdio.h>

int main(){
    int num,counter=1;
    printf("Eneter the number you want to print the table of:");
    scanf("%d",&num);

  do{
      printf("%d x %d=%d \n",num,counter,num*counter);
      counter++;
  }while(counter<=10);
}