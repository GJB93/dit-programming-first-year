/* Program Description
    Program to determine the
    marital status of a person
    given a certain character
    Author: Graham Byrne
    Date: 14/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration
    char maritalStatus;
    
    //Variable initialisation
    maritalStatus = ' ';
    
    //Asking for input
    printf("S = Single\nM = Married\nW = Widowed\nE = Separated\nD = Divorced\nEnter the character relating to your marital status: ");
    
    //Taking input
    scanf("%1s", &maritalStatus);
    
    //Checking input
    switch (maritalStatus)
    {
        case 's':
        case 'S':
        {
            printf("\nThe character you entered, %c, determines you are single", maritalStatus);
            break;
        }//end case 's'
        
        case 'm':
        case 'M':
        {
            printf("\nThe character you entered, %c, determines you are married", maritalStatus);
            break;
        }//end case 'm'
        
        case 'w':
        case 'W':
        {
            printf("\nThe character you entered, %c, determines you are widowed", maritalStatus);
            break;
        }//end case 'w'
        
        case 'e':
        case 'E':
        {
            printf("\nThe character you entered, %c, determines you are separated", maritalStatus);
            break;
        }//end case 'e'
        
        case 'd':
        case 'D':
        {
            printf("\nThe character you entered, %c, determines you are divorced", maritalStatus);
            break;
        }//end case 'd'
        
        default:
        {
            printf("Invalid code");
            break;
        }//end default
        
    }//end switch
    
    getchar();
    getchar();
}//end main()