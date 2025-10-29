#include <stdio.h>

int main(){

    int age=18;
    int *ptr=&age;//here the variable pointer stores the address of age
    printf("%d",*ptr);//here pointer prints the value saved from address of age 

    int x = 5;
    int *p = &x;     // p stores address of x

    printf("%d\n", *p);   // prints 5  → value at address
    printf("%p\n", &x);   // prints address of x
    printf("%p\n", p);    // same address (since p = &x)

    return 0;
}