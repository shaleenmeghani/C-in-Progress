#include <stdio.h>

int main(){
    int number,j;
    printf("enter the number where you want to stop..:");
    scanf("%d",&number);

    for(int i=0;i<=number;i++)
    {
        printf("%3d",i);
    }
    for(int j=number-1;j>=0;j--)
    {
        printf("%3d",j);
    }
    return 0;
}