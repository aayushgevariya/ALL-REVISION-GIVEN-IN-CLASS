#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()

{

    char a[] = "coconut"; 

    char b[50];  
    
    do

    {

        printf("Enter Any Fruit Name");

        scanf("%s",&b);
     
    }

    while(strcmp(a,b)!=0);

    printf("Answer is Correct!!");

    return 0;
}