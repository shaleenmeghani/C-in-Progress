#include <stdio.h>

int main(){
    int number,digit,reverse=0;
    printf("enter number:");
    scanf("%d",&number);

    for(int temp=number;temp!=0;temp/=10)
    {
        digit=temp%10;
        reverse=(reverse*10)+digit;
    }
    printf("%d",reverse);
    return 0;
}