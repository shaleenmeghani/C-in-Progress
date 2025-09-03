#include <stdio.h>

int main(){
    int number,d,sum=0,n,nsum=0;
    printf("enter number:");
    scanf("%d",&number);//591

    while(number!=0)
    {
        d=number%10;//1
        sum+=d;
        number/=10;//59
    }
    while(sum!=0)//this loop further sums two digit number to single digit
    {
        n=sum%10;
        nsum+=n;
        sum/=10;
    }
    printf("sum = %d",nsum);
    return 0;
}