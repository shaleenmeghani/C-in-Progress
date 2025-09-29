#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    clrscr();
    char name[15],username[15];
    printf("enter name:");
    scanf("%s",name);

    strlwr(name);//as usernames are always in lwr we used this function!!

    strcpy(username,name);//this string function doesnot require turbo!!
    printf("username:%s",username);

    getch();
    return 0;
}