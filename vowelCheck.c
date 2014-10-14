/* Program Description
    Program to read in a character
    and determine whether it is a vowel
    using a switch statement
    Author: Graham Byrne
    Date: 14/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declarations
    char input;
    
    //Variable initialisation
    input = ' ';
    
    //Asking for input
    printf("Enter a character from the keyboard: ");
    
    //Taking input
    scanf("%1s", &input);
    
    //Checking input using switch
    switch (input)
    {
        case 'a':
        case 'A':
        {
            printf("The character %c is a vowel", input);
            break;
        }//end 'a' case
        
        case 'e':
        case 'E':
        {
            printf("The character %c is a vowel", input);
            break;
        }//end 'e' case
        
        case 'i':
        case 'I':
        {
            printf("The character %c is a vowel", input);
            break;
        }//end 'i' case
        
        case 'o':
        case 'O':
        {
            printf("The character %c is a vowel", input);
            break;
        }//end 'o' case
        
        case 'u':
        case 'U':
        {
            printf("The character %c is a vowel", input);
            break;
        }//end 'u' case
        
        default:
        {
            printf("The character %c is not a vowel", input);
            
        }//end default
        
    }//end switch
    
    getchar();
    getchar();
    
    
}//end main()