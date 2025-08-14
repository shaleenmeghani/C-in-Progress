//arithmetic operations by user choice
#include <stdio.h>

int main(){
    float n1,n2;

    printf("enter n1:");
    scanf("%f",&n1);

    printf("enter n2:");
    scanf("%f",&n2);

    printf("Menu:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nenter:");
    int choice;
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("%f",n1+n2);
    }
    else if(choice==2)
    {
        printf("%f",n1-n2);
    }
    else if(choice==3)
    {
        printf("%f",n1*n2);
    }
    else if(choice==4)
    {
        if(n2!=0)
        {
            printf("%f",n1/n2);
        }
        else
        {
            printf("you cannot divide a number by 0!");
        }
    }
    else
    {
        printf("choose correct option");
    }
    return 0;
}