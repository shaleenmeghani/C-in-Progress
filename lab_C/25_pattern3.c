#include <stdio.h>

int main(){
    int r;
    printf("enter number of rows:");
    scanf("%d",&r);
    
    for(int i=1;i<=r;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c ",'a'+j);
        }
        printf("\n");
    }
    return 0;
}