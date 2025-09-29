#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    clrscr();
    char name[15],surname[15];

    printf("enter name:");
    scanf("%s",name);

    printf("enter surname:");
    scanf("%s",surname);

    strcat(name,surname);//name is destination where surname the source will be conacatenated
    printf("%s",name);//prints the destination name which has been conacatenated with full name
    
    getch();
    return 0;
}