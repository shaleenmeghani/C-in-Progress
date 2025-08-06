//sum,subtraction,multiplication,division,
#include <stdio.h>

int main(){
    int n1,n2,sum,multi,sub,div;

    printf("enter value for n1:");
    scanf("%d",&n1);

    printf("enter value for n2");
    scanf("%d",&n2);

    sum=n1+n2;
    sub=n1-n2;
    multi=n1*n2;
    div=n1/n2;

    printf("sum = %d",sum);
    printf("subtraction = %d",sub);
    printf("multiplication = %d",multi);
    printf("division = %d",div);

    return 0;
}

