//converting any lowercase character inputted by user to uppercase
#include <stdio.h>

int main(){
    char ch;

    printf("enter any character:");
    scanf("%c",&ch);//let input = b ascii= 98

    ch=ch-32;//as difference between capital and small is 32
    printf("%c",ch);
    
    return 0;
}