#include <stdio.h>

int main(){
    int i,no;
    printf("enter number:");
    scanf("%d",&no);

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",no,i,no*i);
    }
    return 0;
}