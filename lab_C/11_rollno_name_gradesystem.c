//write a program to read rollno name and marks of three numbers and calculate total of marks percentage and division
#include <stdio.h>

int main(){
    int rollno;
    char namee[] = "Shaleen Meghani";
    
    printf("enter roll number:");
    scanf("%d",&rollno);

    float sub1,sub2,sub3;

    printf("enter marks of subject1:");
    scanf("%f",&sub1);

    printf("enter marks of subject2:");
    scanf("%f",&sub2);

    printf("enter marks of subject3:");
    scanf("%f",&sub3);


    printf("Roll No: %d\n",rollno);
    printf("%s\n",namee);
    printf("marks of subject 1: %.2f\n",sub1);
    printf("marks of subject 2: %.2f\n",sub2);
    printf("marks of subject 3: %.2f\n",sub3);

    float sum=sub1+sub2+sub3;
    float percentage;
    percentage=(sum*100)/300;

    printf("sum total of marks: %.2f\n",sum);
    printf("average marks = %.2f\n",(sum)/3);
    printf("percentage = %.2f percent\n",percentage);
    
    if (percentage<=100 && percentage>=80)
    {
        printf("division 1!!");
    }
    else if(percentage<80 && percentage>=60)
    {
        printf("division 2!!");
    }
    else if(percentage<60 && percentage>=40)
    {
        printf("division 3!!");
    }
    else if(percentage<40)
    {
        printf("NI!!");
    }
    else
    {
        printf("marks you entered were incorrect resulting in incorrect percentage calculations");
    }
    return 0;
}