#include <stdio.h>

int main(){
    int row;
    printf("enter rows:");
    scanf("%d",&row);//3

    for(int i=1;i<=row;i++)
    {
        for(int s=1;s<=row-i;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}