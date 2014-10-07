/* Program Description
    Program that asks for three
    numbers and displays them on
    separate lines.
    Author: Graham Byrne
    Date: 7/10/2014
*/
#include <stdio.h>

main()
{
    //Variable Declaration and Initialisation
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    
    //Ask questions relating to program
    printf("Please enter three numbers: \n");
    
    //Reading in values
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    
    //Printing out values received
    printf("\nThe value of the first number is %.0f", num1);
    printf("\nThe value of the second number is %.1f", num2);
    printf("\nThe value of the third number is %.1f", num3);
    
    getchar();
    getchar();
    
}//end main()
    
    