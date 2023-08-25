#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int  main(){
    
    //Random_Number_Generate
    int number,guess,counter=1;
    srand(time(0));
    number= rand()%100;
    // printf("%d",number);
    
    do{
        printf("Guess the number:");
        scanf("%d",&guess);

        if(guess>number){
            printf("Please enter the lower number \n");
        }
        else if (guess<number){
            printf("Please enter the higher number again \n");
        }
        else{
            printf("You Guessed the number in %d chances \n",counter);
        }
        counter++;
    }while(guess!=number);
    return 0;
}      