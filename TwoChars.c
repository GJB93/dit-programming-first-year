/* Program Description
    Program to receive and
    display char variables
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
    scanf("%1s", &ch1);
    scanf("%1s", &ch2);
    
    //Printing out received characters
    printf("\nThe first character received was %c", ch1);
    printf("\nThe second character received was %c", ch2);
    getchar();
    getchar();
    
}//end main()