#include <stdio.h>

int main(){
    int row;
    printf("enter rows:");
    scanf("%d",&row);

    for(int upperi=1;upperi<=row;upperi++)
    {
        for(int uppers=1;uppers<=row-upperi;uppers++)
        {
            printf(" ");
        }
        for(int upperj=1;upperj<=upperi*2-1;upperj++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int loweri=row-1;loweri>0;loweri--)
    {
        for(int lowers=1;lowers<=row-loweri;lowers++)
        {
            printf(" ");
        }
        for(int lowerj=1;lowerj<=loweri*2-1;lowerj++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
