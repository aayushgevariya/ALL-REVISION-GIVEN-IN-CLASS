#include <stdio.h>
#include <conio.h>
int main ()

{
    
    int num;
    
    printf ("\n Select Your Language \n press 1 for english \n press 2 for hindi \n press 3 for gujarati");
    printf ("\n enter a number");
    scanf ("%d",&num);
    
    switch(num)
    {
        case 1: printf("\n your Language is english");
        break;
        
        case 2: printf("\n your Language is hindi"); 
        break;
        
        case 4: printf("\n your Language is gujarati"); 
        break;
        
        default : printf("\n your number is not valid");
        break;
    }


         
         return 0;
    
}