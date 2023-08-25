#include<stdio.h>

int main(){
    int rate_us;

    printf("Please Give Your Valuable Feedback(1-5):");
    scanf("%d",&rate_us);

    switch (rate_us)
    {
    case 1:
        printf("Thanks for your valuable feedback\n");
        printf("You Gave us Excellent\n");
        break;

    case 2:
        printf("Thanks for your valuable feedback\n");
        printf("You Gave us Best\n");
        break;

    case 3:
        printf("Thanks for your valuable feedback\n");
        printf("You Gave us Good\n");
        break;

    case 4:
        printf("Thanks for your valuable feedback\n");
        printf("You Gave us So So\n");
        break;
    
    case 5:
        printf("Thanks for your valuable feedback\n");
        printf("You Gave us Poor\n");
        break;


    default:
        printf("Please Give Ratings Between 1 to 5");
        break;
    }
    return 0;
}