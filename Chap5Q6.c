/* Program Description
    Program to display the value of
    a single numeral character as a
    word
    Author: Graham Byrne
    Date: 14/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration
    char numeral;
    
    //Variable initiation
    numeral = ' ';
    
    //Asking for input
    printf("Enter a single numeral value from the keyboard: ");
    
    //Taking input
    scanf("%1s", &numeral);
    
    //Checking input
    switch (numeral)
    {
        case '1':
        {
            printf("\nOne");
            break;
        }// case 1
        
        case '2':
        {
            printf("\nTwo");
            break;
        }// case 2
        
        case '3':
        {
            printf("\nThree");
            break;
        }//case 3
        
        case '4':
        {
            printf("\nFour");
            break;
        }//case 4
        
        case '5':
        {
            printf("\nFive");
            break;
        }//case 5
        
        case '6':
        {
            printf("\nSix");
            break;
        }//case 6
    
        case '7':
        {
            printf("\nSeven");
            break;
        }//case 7
        
        case '8':
        {
            printf("\nEight");
            break;
        }//case 8
        
        case '9':
        {
            printf("\nNine");
            break;
        }//case 9
        
        case '0':
        {
            printf("\nZero");
            break;
        }//case 0
        
        default:
        {
            printf("Invalid input");
        }//default
    }//end switch
    
    getchar();
    getchar();
    getchar();
}//end main()