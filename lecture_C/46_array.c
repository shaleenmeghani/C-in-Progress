#include <stdio.h>

int main() {
    int numberskaarray[5];
    for(int i=0;i<5;i++)
    {
        printf("enter value for element[%d]:",i);
        scanf("%d",&numberskaarray[i]);
        printf("value stored at element %d is %d\n",i,numberskaarray[i]);
    }
    return 0;
}