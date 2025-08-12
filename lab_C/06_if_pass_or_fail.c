//checking if user is pass or fail according to the marks he has input
#include <stdio.h>

int main(){
    float marks;

    printf("enter your marks:");
    scanf("%f",&marks);

    if(marks>=33){
        printf("Result: PASS");
    }else{
        printf("Result: FAIL");
    }
    
    return 0;
}