#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    clrscr();
    char str1[50],str2[50];
    printf("enter for first string:");
    gets(str1);

    printf("enter for second string:");
    gets(str2);

    if(strcmp(str1,str2)==0)//in c language 0 is true and 1 is false value
    {
        printf("both the strings are same!!");
    }
    else
    {
        printf("both the strings are different..");
    }

    getch();
    return 0;
}