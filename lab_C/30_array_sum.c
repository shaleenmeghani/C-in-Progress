#include <stdio.h>

int main() {
    int number,numberskaarray[100],sum=0;
    printf("enter number of inputs you want:");
    scanf("%d",&number);
    
    if(number>100)
    {
        printf("you cannot choose more than 100 numbers!!");
    }
    else
    {
        for(int i=0;i<number;i++)
        {
            printf("enter value for element[%d]:",i);
            scanf("%d",&numberskaarray[i]);
            sum+=numberskaarray[i];
        }
        printf("sum = %d",sum);
    }
    return 0;
}