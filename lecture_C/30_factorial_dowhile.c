#include <stdio.h>

int main(){
    int number,i=1,prod;
    printf("enter a number:");
    scanf("%d",&number);

    do
    {
        prod*=i;
        i++;
    }while(i<=number);
}