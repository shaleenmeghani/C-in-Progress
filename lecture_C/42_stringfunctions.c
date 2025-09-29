//the string functions used run only on turbo c
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    clrscr();

    char bookname[25],authorname[20];
    int price,booknumber;

    printf("enter bookname:");
    gets(bookname);

    printf("enter authorname:");
    gets(authorname);

    printf("enter price:");
    scanf("%d",&price);

    printf("enter booknumber:");
    scanf("%d",&booknumber);

    int lengthofstring;
    lengthofstring=strlen(bookname);

    printf("book name in upper case:%s\n",strupr(bookname));
    printf("book name in upper case:%s\n",strlwr(bookname));
    printf("reverse of book name:%s\n",strrev(bookname));//here the string in lowercase will be reversed cause of line number 24..
    printf("again reversing the reverse of bookname:%s\n",strrev(bookname));//because of above line the bookname would be in reverse form so now we are reversing it again so that it comes back to its original form as in line number 24

    getch();
    return 0;
}