#include <stdio.h>

int main() {
    int number,numberskaarray[100],sum=0,oddsum=0,evensum=0;
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
            
            if(numberskaarray[i]%2==0)
            {
                printf("%d is even number!!\n",numberskaarray[i]);
                sum+=numberskaarray[i];
                evensum+=numberskaarray[i];
            }
            else
            {
                printf("%d is an odd number!!\n",numberskaarray[i]);
                sum+=numberskaarray[i];
                oddsum+=numberskaarray[i];
            }
        }
        printf("sum of all = %d\n",sum);
        printf("sum of even = %d\n",evensum);
        printf("sum of odd = %d\n",oddsum);
    }
    return 0;
}