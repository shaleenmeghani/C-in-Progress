//simple interest formula
#include <stdio.h>

int main(){
    float p,r,t,amt;

    printf("enter value for p:");
    scanf("%f",&p);

    printf("enter value for r:"); 
    scanf("%f",&r);

    printf("enter value for t:");
    scanf("%f",&t);

    amt=(p*r*t)/100;
    printf("amount = %f",amt);

    return 0;
}