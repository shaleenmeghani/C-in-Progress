//finding ASCII value of any character inputted by user
#include <stdio.h>

int main(){
    char ch;

    printf("enter any character:");
    scanf("%c",&ch);

    printf("ASCII value = %d",ch); //here as we change the identifier typeCONVERSION happens

    return 0;
}