#include<stdio.h>
#include<string.h>

int main(){
    char str[]="hello Bro";
    char cp[20];
    strcpy(cp,str);
    printf("%s",cp);
    return 0;
}