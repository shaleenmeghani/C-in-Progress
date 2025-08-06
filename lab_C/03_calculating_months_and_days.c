//calculating months and days
#include <stdio.h>

int main(){
    int inputdays,months,days;

    printf("enter number of days:");
    scanf("%d",&inputdays);

    months=inputdays/30;
    days=inputdays%30;

    printf("%d months and %d days..",months,days);
    
    return 0;
}