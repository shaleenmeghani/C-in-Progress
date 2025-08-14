//basic operations based on users choice
#include <stdio.h>

int main(){
    printf("Menu:\n1.square\n2.cube\n3.simple interest\n4.odd or even\n5.area of a circle\n6.minimum between three numbers\n7.swapping two numbers without third value\nchoose:");
    int choice;
    scanf("%d",&choice);

    if(choice==1)
    {
        int sqno;
        printf("enter a number to get it's square:");
        scanf("%d",&sqno);

        printf("square of %d = %d",sqno,sqno*sqno);
    }
    else if(choice==2)
    {
        int cubeno;
        printf("enter a number to get it's cube:");
        scanf("%d",&cubeno);

        printf("cube of %d = %d",cubeno,cubeno*cubeno*cubeno);
    }
    else if(choice==3)
    {
        float p,r,t;

        printf("enter principal amount:");
        scanf("%f",&p);

        printf("enter rate:");
        scanf("%f",&r);

        printf("enter time:");
        scanf("%f",&t);

        printf("amount = %f",(p*r*t)/100);
    }
    else if(choice==4)
    {
        int no;
        printf("enter a number to check if it's odd or even:");
        scanf("%d",&no);

        if(no%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }
    else if(choice==5)
    {
        float pi=3.14,r;
        printf("enter radius:");
        scanf("%f",&r);

        printf("area of the circle = %f",pi*(r*r));
    }
    else if(choice==6)
    {
        int no1,no2,no3;
        printf("enter value for no1:");
        scanf("%d",&no1);

        printf("enter value for no2:");
        scanf("%d",&no2);

        printf("enter value for no3:");
        scanf("%d",&no3);

        if(no1<=no2 && no1<=no3)
        {
            printf("%d is the smallest",no1);
        }
        else if(no2<=no1 && no2<=no3)
        {
            printf("%d is the smallest",no2);
        }
        else
        {
            printf("%d is the smallest",no3);
        }
    }
    else if(choice==7)
    {
        int n1,n2;

        printf("enter value for n1:");
        scanf("%d",&n1);

        printf("enter value for n2:");
        scanf("%d",&n2);

        n2=n2+n1;
        n1=n2-n1;
        n2=n2-n1;

        printf("now,n1 = %d and n2 = %d",n1,n2);
    }
    else
    {
        printf("enter correct choice..");
    }
    return 0;
}