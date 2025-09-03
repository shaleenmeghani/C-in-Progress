#include <stdio.h>

int main(){
    int number,d,r=0;
    printf("enter a number:");
    scanf("%d",&number);//908

    while(number!=0)
    {
        d=number%10;
        r=(r*10)+d;
        number/=10;
    }
    printf("%d",r);
    return 0;
}