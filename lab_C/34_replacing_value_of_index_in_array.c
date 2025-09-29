#include <stdio.h>

int main() {
    int number,numberskaarray[100],replaceindex;
    printf("enter where you want to stop:");
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

        printf("enter index of element to replace(index starts with 0!!):");
        scanf("%d",&replaceindex);

        for(int i=0;i<number;i++)
        {
            if(i==replaceindex)
            {
                printf("enter the value to update!!:");
                scanf("%d", &numberskaarray[i]);
            }
        }
        for(int i=0;i<number;i++)
        {
            printf("%d at index %d\n",numberskaarray[i],i);
        }
    }
    return 0;
}