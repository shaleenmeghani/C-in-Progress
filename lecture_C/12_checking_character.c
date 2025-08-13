//checking input by user is uppercase/lowercase/special character or a digit
#include <stdio.h>

int main(){
    char ch;

    printf("enter anything:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("%c is an upper case character",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c is a lower case character",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is a digit",ch);
    }
    else
    {
        printf("%c is a special character",ch);
    }
    return 0;
}