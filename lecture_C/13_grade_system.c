//taking input of marks of 5 subject user studies and then giving them the result
#include <stdio.h>

int main(){
    float marks;

    printf("enter marks:");
    scanf("%f",&marks);

    if(marks>=80 && marks<=100)//80 to 100 = A+
    {
        printf("Grade | A+");    
    }
    else if(marks>=70 && marks<80)//70 to 79 = A
    {
        printf("Grade | A");
    }
    else if(marks>=60 && marks<70)//60 to 69 = B
    {
        printf("Grade | B");
    }
    else if(marks>=50 && marks<60)//50 to 59 = C
    {
        printf("Grade | C");
    }
    else if(marks>=40 && marks<50)//40 to 49 = D
    {
        printf("D");
    }
    else if(marks<40)//less than 40 = NI or FAIL
    {
        printf("Grade | NI");
    }
    else{
        printf("enter correct marks!\nmarks can not be greater than 100!!");
    }
}