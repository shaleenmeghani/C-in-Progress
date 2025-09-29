#include <stdio.h>

int main() {
    int number,numberskaarray[100];
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
            
            if(numberskaarray[i]>0)
            {
                printf("%d is possitive number!!\n",numberskaarray[i]);
            }
            else if(numberskaarray[i]<0)
            {
                printf("%d is negative number!!\n",numberskaarray[i]);
            }
            else
            {
                printf("%d is 0!!\n",numberskaarray[i]);
            }
        }
    }
    return 0;
}