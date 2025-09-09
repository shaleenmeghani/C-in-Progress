#include <stdio.h>

int main(){
    int number,i=0,evensum=0,oddsum=0;
    printf("enter a number:");
    scanf("%d",&number);
    
    do
    {
        if(i%2==0)
        {
        evensum+=i;
        }
        else
        {
        oddsum+=i;
        }
        i++;
    }while(i<=number);
    
    printf("sum of all even numbers till %d = %d\n",number,evensum);
    printf("sum of all odd numbers till %d = %d\n",number,oddsum);
    return 0;
}