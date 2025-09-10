#include <stdio.h>

int main(){
    int number;
    printf("enter how many lines of pattern you want:");
    scanf("%d",&number);

    for(int i=1;i<=number;i++)//this loop decides the rows
    {
        for(int j=0;j<i;j++)//this loop decides amount in row
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}