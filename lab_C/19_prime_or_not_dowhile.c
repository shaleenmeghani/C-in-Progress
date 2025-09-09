#include <stdio.h>

int main(){
    int number,i=1,counter=0;
    printf("enter a number:");
    scanf("%d",&number);

    do
    {
        if(number%i==0)
        {
        counter++;
        }
        i++;
    }while(i<=number);

    if(counter==2)
    {
        printf("%d is a prime number",number);
    }
    else
    {
        printf("%d is not a prime number",number);
    }
    return 0;
}