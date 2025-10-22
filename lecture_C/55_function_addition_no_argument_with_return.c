#include <stdio.h>

int add();

int main(){
    int sum=add();
    printf("%d",&sum);
    return 0;
}

int add(){
    int n1,n2;
    printf("enter value for n1:");
    scanf("%d",&n1);
    printf("enter value for n2:");
    scanf("%d",&n2);
    return n1+n2;
}