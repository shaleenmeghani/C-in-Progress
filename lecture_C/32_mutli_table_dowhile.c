#include <stdio.h>

int main(){
    int number,i=1;
    printf("enter a number:");
    scanf("%d",&number);

    do
    {
        printf("%d x %d = %d\n",number,i,number*i);
        i++;
    }while(i<=10);
}