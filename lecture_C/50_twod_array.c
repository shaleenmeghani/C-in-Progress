#include <stdio.h>

int main(){
    int number,twodarray[2][2];
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            printf("enter value for [%d][%d]:",i,j);
            scanf("%d",&twodarray[i][j]);
        }
    }
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            printf("%3d",twodarray[i][j]);
        }
        printf("\n");
    }
    return 0;
}