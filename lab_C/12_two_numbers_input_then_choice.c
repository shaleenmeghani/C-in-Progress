#include <stdio.h>

int main(){
    int n1,n2;
    char choice;

    printf("enter value for n1:");
    scanf("%d",&n1);

    printf("enter value for n2:");
    scanf ("%d",&n2);

    printf("Menu:\n1.Sum\n2.subtraction\n3.multi\n4.divi\nchoice(a,s,m,d):");
    scanf(" %c",&choice);//space here is to remove blankspace and white space

    switch(choice)
    {
    case 'A': case 'a':
        printf ("%d",n1+n2);
        break;
    case 'S': case 's':
        printf ("%d",n1-n2) ;
        break;
    case 'M': case 'm':
        printf("%d",n1*n2) ;
        break;
    case 'D': case 'd':
        printf("%d",n1/n2);
        break;
    default:
        printf("Invalid choice..!!");
    }
    return 0;
}