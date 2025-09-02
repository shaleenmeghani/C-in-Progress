//0,1,1,2,3,5,8,13...
#include <stdio.h>

int main(){
    int a=0,b=1;
    int i=1,sum,term;
    printf("enter a term:");
    scanf("%d",&term);

    while(i<=term)
    {
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
        i++;
    }
}