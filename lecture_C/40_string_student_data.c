#include <stdio.h>

int main(){
    char name[15],lastname[15];
    printf("enter student name:");
    scanf("%s",name);

    printf("enter student last name:");
    scanf("%s",lastname);

    printf("student name is %s %s",name,lastname);

    return 0;
}