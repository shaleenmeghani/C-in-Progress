#include <stdio.h>

int main(){
    int dayno;

    printf("enter number of day:");
    scanf("%d",&dayno);

    if(dayno==1)
    {
        printf("it's Sunday");
    }
    else if(dayno==2)
    {
        printf("it's Monday");
    }
    else if(dayno==3)
    {
        printf("it's Tuesday");
    }
    else if(dayno==4)
    {
        printf("it's Wednesday");
    }
    else if(dayno==5)
    {
        printf("it's Thursday");
    }
    else if(dayno==6)
    {
        printf("it's Friday");
    }
    else if(dayno==7)
    {
        printf("it's Saturday");
    }
    else
    {
        printf("enter a valid number");
    }
    return 0;
}