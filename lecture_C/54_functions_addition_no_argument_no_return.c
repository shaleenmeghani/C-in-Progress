#include <stdio.h>

void add();//function declared with no argument no return

int main(){
    add();//function called
    return 0;
}

//function definition
void add(){
    int n1,n2;
    printf("enter valeu for first number:");
    scanf("%d",&n1);
    printf("enter valeu for second number:");
    scanf("%d",&n2);
    printf("%d",n1+n2);
}