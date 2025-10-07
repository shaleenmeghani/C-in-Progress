#include <stdio.h>

int main(){
    int mattrix1[2][2],mattrix2[2][2],mattrix3[2][2],sum[2][2];
    for(int i1=0;i1<=1;i1++)
    {
        for(int j1=0;j1<=1;j1++)
        {
            printf("enter value for first matttrix [%d][%d]:",i1,j1);
            scanf("%d",&mattrix1[i1][j1]);
        }
    }
    for(int i2=0;i2<=1;i2++)
    {
        for(int j2=0;j2<=1;j2++)
        {
            printf("enter value for second matttrix [%d][%d]:",i2,j2);
            scanf("%d",&mattrix2[i2][j2]);
        }
    }
    for(int i3=0;i3<=1;i3++)
    {
        for(int j3=0;j3<=1;j3++)
        {
            printf("enter value for third matttrix [%d][%d]:",i3,j3);
            scanf("%d",&mattrix3[i3][j3]);
        }
    }

    for(int i=0;i<=1;i++)//creating sum mattrix
    {
        for(int j=0;j<=1;j++)
        {
            sum[i][j]=mattrix1[i][j]+mattrix2[i][j]+mattrix3[i][j];
        }
    }

    for(int i=0;i<=1;i++)//loop to print sum mattrix
    {
        for(int j=0;j<=1;j++)
        {
            printf("3%d",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}