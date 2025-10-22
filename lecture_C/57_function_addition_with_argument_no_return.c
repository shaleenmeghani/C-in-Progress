#include <stdio.h>

void add(int n1,int n2);//function declared with argument no return

int main(){
    int n1,n2;
    printf("enter value for n1:");
    scanf("%d",&n1);
    printf("enter value for n2:");
    scanf("%d",&n2);
    add(n1,n2);//function called
    return 0;
}

//function definition
void add(int n1,int n2){
    printf("%d",n1+n2);
}