#include <stdio.h>

int main(){
    int number,counter=0;
    printf("enter a number:");
    scanf("%d",&number);

    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            counter++;
        }
    }
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