#include <stdio.h>

void swap();//no argument no return
void swapp(int n1,int n2);//with argument no return
int swappp(int n1,int n2);//with argument with return
int swapppp();//no argument with return

int n1,n2;

int main(){
    printf("enter value for n1:");
    scanf("%d",&n1);
    printf("enter value for n2:");
    scanf("%d",&n2);
    swap();
    swapp(n1,n2);
    printf("with argument no return, now n2 = %d\n",swappp(n1,n2));
    printf("no argument with return, now n1 = %d\n",swapppp());
    return 0;
}

void swap(){
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;

    printf("no argument no return\n");
    printf("now n1 = %d\n",n1);
    printf("now n2 = %d\n",n2);
}

void swapp(int n1,int n2){
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;

    printf("with argument no return\n");
    printf("now n1 =%d\n",n1);
    printf("now n2 = %d\n",n2);
}

int swappp(int n1,int n2){
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    return n2;
}

int swapppp(){
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    return n1;
}