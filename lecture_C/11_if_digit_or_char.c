//checking if input is digit or char
#include <stdio.h>

int main(){
    char ch;

    printf("enter anything:");
    scanf("%c",&ch);

    if(ch>='0' && ch<='9')
    {
        printf("digit");
    }
    else
    {
        printf("character");
    }
    return 0;
}