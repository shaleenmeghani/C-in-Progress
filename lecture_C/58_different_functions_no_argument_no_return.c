#include <stdio.h>

void multiplication();
void division();
void square();

int main(){
    multiplication();
    division();
    square();
    return 0;
}

void multiplication(){
    int n1,n2;
    printf("enter value for n1:");
    scanf("%d",&n1);
    printf("enter value for n2:");
    scanf("%d",&n2);
    printf("%d\n",n1*n2);
}

void division(){
    int n1,n2;
    printf("enter value for n1:");
    scanf("%d",&n1);
    printf("enter value for n2:");
    scanf("%d",&n2);
    printf("%d\n",n1*n2);
}

void square(){
    int n;
    printf("enter value to get its square:");
    scanf("%d",&n);
    printf("%d\n",n*n);
}