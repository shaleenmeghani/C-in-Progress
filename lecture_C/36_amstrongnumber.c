//cheking if a number input by user is amstrong or not..
#include <stdio.h>

int main(){
    int number,d,cube,total=0;
    printf("enter a number:");
    scanf("%d",&number);
    int ognumber=number;

    while(number!=0)
    {
        d=number%10;
        cube=(d*d)*d;
        total+=cube;
        number/=10;
    }
    if(total==ognumber)
    {
        printf("the number you entered is amstrong!!");
    }
    else
    {
        printf("number you entered is not amstrong..");
    }
    return 0;
}