/* Program Description
    Program to print all even numbers
    from 1-100
    Author: Graham Byrne
    Date: 21/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration
    int i = 1;
    
    //for loop count from 1 to 100
    for(i=1;i<101;i++)
    {
        //Checking number is even
        if ((i%2)==0)
        {
            printf("%d, ", i);
        }//end if
    }//end for
    
    getchar();
}