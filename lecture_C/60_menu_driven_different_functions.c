#include <stdio.h>

void input();
void square();
void cube();
void sumofn();
void question();

int number,loop=1;
char choice;

int main(){
    while(loop==1)
    {
        printf("Menu:\n1.Input(i)\n2.Square(q)\n3.Cube(c)\n4.Sum of n Numbers(s)\nEnter you choice:");
        scanf(" %c",&choice);
        if(choice=='i')
        {
            input();
        }
        else if(choice=='q')
        {
            square();
        }
        else if(choice=='c')
        {
            cube();
        }
        else if(choice=='s')
        {
            sumofn();
        }
        else if(choice=='e')
        {
            loop=0;
        }
        else
        {
            printf("you entered invalid choice!!\n");
        }
        question();
    }
    return 0;
}

void input(){
    char data[101];
    printf("enter anything you want to input max 100 characters:");
    scanf("%s",data);
    printf("%s\n",data);
}

void square(){
    printf("enter the number you want to square:");
    scanf("%d",&number);
    printf("%d\n",number*number);
}

void cube(){
    printf("enter the number you want to find cube:");
    scanf("%d",&number);
    printf("%d\n",(number*number)*number);
}

void sumofn(){
    int sum=0;
    printf("enter the number to find sum of n numbers:");
    scanf("%d",&number);
    for(int i=0;i<=number;i++)
    {
        sum+=i;
    }
    printf("sum = %d\n",sum);
}

void question(){
    printf("do you want to continue(y/n):");
    scanf(" %c",&choice);
    if(choice=='y')
    {
        loop=1;
    }
    else if(choice=='n')
    {
        loop=0;
    }
    else
    {
        printf("as you entered invalid choice your program has been stopped!!\n");
        loop=0;
    }
}