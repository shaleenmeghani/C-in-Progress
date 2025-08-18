#include <stdio.h>

int main(){
    char colour;

    printf("choose light colour(R/Y/G:)");
    scanf("%c",&colour);

    if(colour=='R' || colour=='r')
    {
        printf("STOP!!");
    }
    else if(colour=='Y' || colour=='y')
    {
        printf("SLOW DOWN..");
    }
    else if(colour=='G'|| colour=='g')
    {
        printf("GO!!");
    }
    else
    {
        printf("enter valid option..");
    }

    return 0;
}