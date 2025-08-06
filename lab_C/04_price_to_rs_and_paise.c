//price to rs and paise
#include <stdio.h>

int main(){
    float price;
    int rs,paise;

    printf("enter amount/price:");
    scanf("%f",&price);

    rs=(int)price;
    paise=(price-rs)*100;

    printf("rs = %d\npaise = %d",rs,paise);

    return 0;
}