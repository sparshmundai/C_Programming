#include<stdio.h>
// void gm();
// void gaft();
// void gn();

int main(){
    int time;
    printf("Enter the time:");
    scanf("%d",&time);

    if(time<=12){
        gm();
    }
    else if(time>12 && time<=17){
        gaft();
    }
    else{
        gn();
    }

    return 0;
}

void gm(){
    printf("Goodmorning Sparsh");
}

void gaft(){
    printf("GoodAfternoon Sparsh");
}

void gn(){
    printf("GoodNight Sparsh");
}