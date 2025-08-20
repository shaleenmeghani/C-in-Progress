#include <stdio.h>

int main(){
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        switch(ch)
        {
        case 'a':case 'e':case 'i':case 'o':case 'u':
        case 'A':case 'E':case 'I':case 'O':case 'U':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
            break;
        }
    }
    else
    {
        printf("not a character!!");
    }
    return 0;
}
