#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE * f;
    
    f=fopen("filepath.txt","r");//file opened
    
    char data[100];//array created to store data from file
    
    while(fgets(data,100,f))//fgets se file ka data is stored in  array
    {
        printf("%s",data);
    }

    return 0;
}