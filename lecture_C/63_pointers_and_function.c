#include <stdio.h>

int swap(int *n1,int *n2);//example of call by reference function

int main(){
    int x,y;
    printf("enter values for x and y:");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("now the values of x and y are:%d and %d",x,y);
    return 0;
}

int swap(int *n1,int *n2){
    *n1=*n1+*n2;
    *n2=*n1-*n2;
    *n1=*n1-*n2;
}