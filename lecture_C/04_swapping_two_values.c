//swap two numbers after input
#include <stdio.h>

int main(){
    int n1,n2;

    printf("give input for n1:");//5
    scanf("%d",&n1);

    printf("give input for n2:");//7
    scanf("%d",&n2);

    n2=n2+n1;//12
    n1=n2-n1;//7
    n2=n2-n1;//12-7==5

    printf("n1 = %d \n",n1);
    printf("n2 = %d \n",n2);

    return 0;
}