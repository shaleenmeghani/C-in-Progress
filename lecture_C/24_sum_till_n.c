#include <stdio.h>

int main(){
    int number,sum=0,i;
    printf("enter number till where you want its sum:");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        sum+=i;
    }
    printf("%d",sum);

    return 0;
}