/* Program Description
    Using a while loop to print out
    numbers 1-10 in descending order
    Author: Graham Byrne
    Date: 21/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration and initiation
    int i = 10;
    
    //Counting while loop
    while (i!=0)
    {
        if (i!=1)
        {
            printf("%d, ", i);
        }//end if
        else
        {
            printf("%d", i);
        }//end else
        
        i--;
    }//end while
    
    getchar();
}//end main()