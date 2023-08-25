#include<stdio.h>
#include<string.h>

struct stu{
    char name[20];
    int maths;
    int science;
    int english;
    int physical;
    int Economics
};

int main(){
    struct stu mark[5];

    strcpy(mark[0].name,"Janvi");
    mark[0].maths=45;
    mark[0].science=56;
    mark[0].english=67;
    mark[0].physical=89;
    mark[0].Economics=76;

    strcpy(mark[1].name,"Rohan");
    mark[1].maths=35;
    mark[1].science=46;
    mark[1].english=77;
    mark[1].physical=69;
    mark[1].Economics=66;

    strcpy(mark[2].name,"Jatin");
    mark[2].maths=45;
    mark[2].science=56;
    mark[2].english=7;
    mark[2].physical=89;
    mark[2].Economics=76;

    printf("%s %d",mark[0].name,mark[0].physical);
    return 0;
}