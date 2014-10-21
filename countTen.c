/* Program Description
    Program that counts from 1-10
    and prints a message for values 3
    and 7
    Author: Graham Byrne
    Date: 21/10/2014
*/
#include <stdio.h>

main()
{
    //Index variable declaration
    int i;
    
    //for loop to count from 1 to 10
    for(i=0;i<11;i++)
    {
        //Switch to check numbers
        switch (i)
        {
            case 3:
            {
                printf("This number is three\n");
                break;
            }//end case 3
            
            case 7:
            {
                printf("This number is seven\n");
                break;
            }//end case 7
            
            default:
            {
                printf("%d\n", i);
                break;
            }//end default
        }//end switch
        
    }//end for
    
    getchar();
    
}//end main