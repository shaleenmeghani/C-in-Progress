#include <stdio.h>

int main() {
    int numberskaarray[7],sum=0;
    for(int i=0;i<7;i++)
    {
        printf("enter value for element[%d]:",i);
        scanf("%d",&numberskaarray[i]);
        sum+=numberskaarray[i];
    }
    printf("sum = %d",sum);
    return 0;
}