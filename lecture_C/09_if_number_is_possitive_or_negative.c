//checing if a number is possitive or negative..
#include <stdio.h>

int main(){
    int n1;

    printf("enter a number:");
    scanf("%d",&n1);

    if(n1>0){
        printf("%d is a positive integer",n1);
    }else if(n1<0){
        printf("%d is a negative integer",n1);
    }else{
        printf("you entered a number which is equal to 0");
    }
    return 0;
}
