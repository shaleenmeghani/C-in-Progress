#include <stdio.h>

int main(){
    int monthno;
    printf("enter month number:");
    scanf("%d",&monthno);

    if(monthno>=1 && monthno<=12)
    {
        switch(monthno)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                printf("31 days!!");
                break;
            case 2:
                printf("28 days!!");
                break;
            default:
                printf("30 days!!");
                break;
        }
    }
    else
    {
        printf("enter valid month number!!");
    }
    return 0;
}