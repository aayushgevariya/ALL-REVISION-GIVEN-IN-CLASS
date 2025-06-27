#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()

{

    char a[] = "coconut"; 

    char b[50];  
    
    strcpy(b,a);
    
    printf("\n %s",a);

    printf("\n %s",b);

    return 0;
}