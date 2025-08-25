#include <stdio.h>

int main(){
    int no,i,prod=1;
    printf("enter number:");
    scanf("%d",&no);
    
    for(i=1;i<=no;i++)
    {
        prod*=i;
    }
    printf("factorial of %d = %d",no,prod);
    return 0;
}