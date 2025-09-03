#include <stdio.h>

int main(){
    int i=1,n,sum=0,psum=0,nsum=0,counter=0,ncounter=0,pcounter=0;

    while(i)
    {
        printf("enter a number:");
        scanf("%d",&n);
        sum+=n;
        counter+=1;

        if(n==-1)
        {
            printf("this program stops when user enter -1!!\n");
            ncounter+=1;
            break;
        }
        else if(n>=0)
        {
            psum+=n;
            pcounter+=1;
        }
        else if(n<=-1)
        {
            nsum+=n;
            ncounter+=1;
        }
        else
        {
            printf("enter correct number!!!");
        }
    }
    printf("total number entered by user = %d\n",counter);
    printf("total negative numbers entered by user = %d\n",ncounter);
    printf("total possitive numbers entered by user = %d\n",pcounter);
    printf("sum of all numbers input by user = %d\n",sum);
    printf("sum of all negative numbers input by user = %d\n",nsum);
    printf("sum of all possitive numbers input by user = %d\n",psum);
    return 0;
}