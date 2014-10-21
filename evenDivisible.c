/* Program Description
    Program that takes in a number between
    1-5 and checks if it is evenly divisible by any
    numbers between 1-20
    Author: Graham Byrne
    Date: 21/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration and initiation
    int userValue = 0;
    int i = 0;
    
    //Loop to confirm correct input
    while (userValue <= 0 || userValue >5)
    {
        //Prompt for input
        printf("Enter a value from 1-5: ");
        
        //Getting input
        scanf("%d", &userValue);
        
        //Error message
        if (userValue <= 0 || userValue >5)
        {
            printf("Invalid input, enter another value\n");
        }//end if
    }//end while
    
    //Loop to divide each number from 1-20
    for (i=1;i<21;i++)
    {
        //Checking for even divisibility
        if ((i%userValue)==0)
        {
            printf("\n%d is evenly divisible by %d", i, userValue);
        }//end if
    }//end for        
    
    getchar();
    getchar();
    
}//end main()