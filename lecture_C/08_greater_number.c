//finding which number is greater out of two numbers input by user
#include <stdio.h>

int main(){
    int n1,n2;

    printf("enter value for first number:");
    scanf("%d",&n1);

    printf("enter value for second number:");
    scanf("%d",&n2);

    if (n1>n2){
        printf("%d is greater than %d",n1,n2);
    } else if(n2>n1) {
        printf("%d is greater than %d",n2,n1);
    } else{
        printf("both %d and %d are equal!",n1,n2);
    }

    return 0;
}