#include <stdio.h>

int main(){
    int r,n=1;
    printf("enter rows:");
    scanf("%d",&r);

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if (j%2==1)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}