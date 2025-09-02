#include <stdio.h>

int main(){
    int i,j=10;
    for(i=1;i<=5;i++,j--)
    {
        printf("%d ",i);
        printf("%d ",j);
    }
    return 0;
}