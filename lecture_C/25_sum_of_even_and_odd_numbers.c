#include <stdio.h>

int main(){
    int number,oddsum=0,evensum=0,i;
    printf("enter number:");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
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
    printf("sum of even numbers till %d = %d\n",number,evensum);
    printf("sum of odd numbers till %d = %d\n",number,oddsum);

    return 0;
}