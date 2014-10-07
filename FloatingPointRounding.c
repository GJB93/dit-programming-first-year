/* Program Description
    Program to correct 
    floating-point numbers
    to a certain number of 
    decimal places
*/
#include <stdio.h>

main()
{
    //Declaring and initialising variables
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    
    //Ask the user for input
    printf("Enter three floating-point numbers: \n");
    
    //Read in input
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    
    //Print out values received
    printf("\nThe first number is %.4f", num1);
    printf("\nThe first number is %.3f", num2);
    printf("\nThe first number is %.0f", num3);
    
    getchar();
    getchar();
    
}//end main()