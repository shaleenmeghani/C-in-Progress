#include <stdio.h>

int main(){
    int number,evensum=0,oddsum=0;
    printf("enter a number:");
    scanf("%d",&number);

    for(int i=0;i<=number;i++)
    {
        if(i%2==0)
        {
            evensum+=i;
        }
        else
        {
            oddsum+=i;
        }
    }
    printf("sum of all even numbers till %d = %d\n",number,evensum);
    printf("sum of all odd numbers till %d = %d\n",number,oddsum);
    return 0;
}