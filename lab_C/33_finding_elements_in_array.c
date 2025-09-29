#include <stdio.h>

int main() {
    int number,numberskaarray[100],finder=0,result=0;
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
        }

        printf("enter number to find:");
        scanf("%d",&finder);

        for(int i=0;i<number;i++)
        {
            if(numberskaarray[i]==finder)
            {
                result=1;
            }
        }
        if(result==1)
        {
            printf("yes the number you are finding is present in the array");
        }
        else
        {
            printf("not found:(");
        }
    }
    return 0;
}