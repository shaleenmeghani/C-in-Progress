#include <stdio.h>

int main(){
    int number,i=1;
    printf("enter a number:");
    scanf("%d",&number);

    while(i<=10)
    {
        printf("%d x %d = %d\n",number,i,number*i);
        i++;
    }
    return 0;
}