/* Program Description
    Program to enter an integer
    between 1 and 100, check
    if the number is odd or even,
    and print the result
    Author: Graham Byrne
    Date: 7/10/2014
*/
#include <stdio.h>

main()
{
    //Variable Declaration and Initialisation
    int number = 0;
    
    //Asking for a value
    printf("Enter a number between 1 and 100: \n");
    
    //Reading value
    scanf("%d", &number);
    
    //if-else to check if number is odd or even
    if ((number%2)==0)
    {
        printf("The number %d is even", number);
    }
    else
    {
        printf("The number %d is odd", number);
    }//end if-else
    
    getchar();
    getchar();
    
}
    
    