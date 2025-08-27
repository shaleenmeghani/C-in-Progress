//this logic will work for 9 numbers only
#include <stdio.h>

int main(){
    int number,counter=0;
    printf("enter number:");
    scanf("%d",&number);

    for(int temp=number;temp!=0;temp/=10)
    {
        counter+=1;
    }
    printf("%d",counter);
    return 0;
}