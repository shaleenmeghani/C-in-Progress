#include <stdio.h>

int main(){
    int n1,n2,n3;

    printf("enter first number:");
    scanf("%d",&n1);

    printf("enter second number:");
    scanf("%d",&n2);

    printf("enter third number:");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3)
    {
        printf("%d is the greatest number",n1);
    }
    else if(n2>n1 && n2>n3)
    {
        printf("%d is the greatest number",n2);
    }
    else if(n1==n2 && n2==n3)
    {
        printf("all numbers are equal");
    }
    else
    {
        printf("%d is the greatest",n3);
    }

    return 0;
}