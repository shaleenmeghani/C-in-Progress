#include <stdio.h>

int main(){
    int number,i=1,prod=1;
    printf("enter a number:");
    scanf("%d",&number);

    while(i<=number)
    {
        prod*=i;
        i++;
    }
    printf("factorial of %d = %d",number,prod);
    return 0;
}