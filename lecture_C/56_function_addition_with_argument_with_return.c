#include <stdio.h>

int add(int n1,int n2);//function declared with argument with return

int main(){
    int n1,n2;
    printf("enter value for n1:");
    scanf("%d",&n1);
    printf("enter value for n2:");
    scanf("%d",&n2);

    int sum=add(n1,n2);//function called
    printf("%d",sum);
    return 0;
}

//function definition
int add(int n1,int n2){
    return n1+n2;
}