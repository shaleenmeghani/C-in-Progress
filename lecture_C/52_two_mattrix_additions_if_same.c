#include <stdio.h>

int main(){
    int r1,c1,r2,c2,mattrix1[100][100],mattrix2[100][100],sum[100][100];
    printf("enter value for row of first mattrix:");
    scanf("%d",&r1);

    printf("enter value for column of first mattrix:");
    scanf("%d",&c1);

    printf("enter value for row of second mattrix:");
    scanf("%d",&r2);

    printf("enter value for column of second mattrix:");
    scanf("%d",&c2);

    if(r1==r2 && c1==c2)
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf("enter value for first mattrix [%d][%d]",i,j);
                scanf("%d",&mattrix1[i][j]);
            }
        }
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("enter value for second mattrix [%d][%d]",i,j);
                scanf("%d",&mattrix2[i][j]);
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                sum[i][j]=mattrix1[i][j]+mattrix2[i][j];
                printf("%d",sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("mattrices are not same therefore addition cannot be done!!");
    }
    return 0;
}