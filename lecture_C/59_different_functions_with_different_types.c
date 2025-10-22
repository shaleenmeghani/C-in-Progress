#include <stdio.h>

void input();
void square(int n);
int cube(int n);
int sumofn();

int n;

int main(){
    input();

    printf("enter number to use in all functions:");
    scanf("%d",&n);

    square(n);
    int ans=cube(n);
    printf("cube = %d\n",ans);
    int sumans=sumofn();
    printf("sum of number till %d = %d\n",n,sumans);
    
    return 0;
}

void input(){
    char name[15];
    printf("enter name:");
    scanf("%s",name);
    printf("you entered: %s\n",name);
}

void square(int n){
    printf("square = %d\n",n*n);
}

int cube(int n){
    return n*n*n;
}

int sumofn(){
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}