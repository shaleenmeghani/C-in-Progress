#include <stdio.h>

int main(){
    float n1,n2;
    printf("enter value for n1:");
    scanf("%f",&n1);

    printf("enter value for n2:");
    scanf("%f",&n2);

    printf("Menu:\n1.Add\n2.Subtract\n3.Product\n4.Division\n");
    int choice;
    printf("choose operation:");
    scanf("%d",&choice);

    if(choice>=1 && choice<=4)
    {
        switch(choice)
        {
            case 1:
                printf("%.2f",n1+n2);
                break;
            case 2:
                printf("%.2f",n1-n2);
                break;
            case 3:
                printf("%.2f",n1*n2);
                break;
            case 4:
                printf("%.2f",n1/n2);
                break;
        }
    }
    else
    {
        printf("enter correct choice!!");
    }

}