#include <stdio.h>

int main(){
    char name[15],publication[25];
    float amount;

    printf("enter name of book:");
    scanf("%s",name);

    printf("enter name of publication:");
    scanf("%s",publication);

    printf("enter price of book:");
    scanf("%f",&amount);

    printf("%s of %s publication costs rs %f",name,publication,amount);
    
    return 0;
}