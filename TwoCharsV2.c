/* Program Description
    Program to receive and
    display char variables
    using getchar() and
    putchar()
    Author: Graham Byrne
    Date: 7/10/2014
*/
#include <stdio.h>

main()
{
    //Variable Declaration and Initialisation
    char ch1 = ' ';
    char ch2 = ' ';
    
    //Asking question to user
    printf("Enter any two characters: \n");
    
    //Reading in variables
    ch1 = getchar();
    ch2 = getchar();
    
    //Printing out received characters
    putchar(ch1);
    putchar(ch2);
    
    getchar();
    getchar();
    
}//end main()