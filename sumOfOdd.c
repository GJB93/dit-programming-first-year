/* Program Description
    Program to find the sum of all
    odd integers in the range 1-99
    Author: Graham Byrne
    Date: 21/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration and initiation
    int total = 0;
    int i;
    
    //Counting up to 99
    for (i=1;i<100;i++)
    {
        if ((i%2)!=0)
        {
            total = total + i;
        }//end if
        
    }//end for
    
    //print answer
    printf("The sum of the odd numbers from 1-99 is %d", total);
    
    getchar();
}