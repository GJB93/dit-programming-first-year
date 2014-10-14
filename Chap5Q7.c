/* Program Description
    Program to take in a number from
    1 - 7 relating to the day of the week
    Author: Graham Byrne
    Date: 14/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration
    char dayOfTheWeek;
    
    //Variable initiation
    dayOfTheWeek = ' ';
    
    //Asking for input
    printf("Enter a number from 1 to 7 relating to the day of the week\n1 = Sunday, 7 = Saturday\n");
    
    //Taking input
    scanf("%1s", &dayOfTheWeek);
    
    //Checking input
    switch(dayOfTheWeek)
    {
        case '1':
        {
            printf("\nSunday");
            break;
        }//case 1
        
        case '2':
        {
            printf("\nMonday\n");
            break;
        }//case 2
        
        case '3':
        {
            printf("\nTuesday");
            break;
        }//case 3
        
        case '4':
        {
            printf("\nWednesday");
            break;
        }//case 4
        
        case '5':
        {
            printf("\nThursday");
            break;
        }//case 5
        
        case '6':
        {
            printf("\nFriday");
            break;
        }//case 6
        
        case '7':
        {
            printf("\nSaturday");
            break;
        }//case 7
        
        default:
        {
            printf("\nInvalid input");
            break;
        }//default
        
    }//end switch
    
    getchar();
    getchar();
}//end main()