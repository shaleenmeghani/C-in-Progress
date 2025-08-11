//checking if the number input by user is possitive or not
#include <stdio.h>
int main(){
    int n1;

    printf("enter a number:");
    scanf("%d",&n1);

    if (n1>0){
        printf("%d is a positive integer",n1);
    }

    return 0;
}