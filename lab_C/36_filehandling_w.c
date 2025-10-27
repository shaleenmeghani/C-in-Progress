#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE * f;
    
    f=fopen("filepath.txt","w");//file opened
    fprintf(f,"characters and strings data");//writing on file
    
    return 0;
}