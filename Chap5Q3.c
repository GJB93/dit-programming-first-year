/* Program Description
    Program to determine whether one
    number is a factor of another number
    Author: Graham Byrne
    Date: 14/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration
    int num1;
    int num2;
    
    //Variable initialisation
    num1 = 0;
    num2 = 0;
    
    //Asking for input
    printf("Enter two integer, a first integer\nand a second integer to divide into the first integer: \n");
    
    //Taking input
    scanf("%d%d", &num1, &num2);
    
    //Checking input
    if ((num1%num2)==0)
    {
        printf("\n%d is a factor of %d", num2, num1);
    }
    else
    {
        printf("\n%d is not a factor of %d", num2, num1);
    }
    
    getchar();
    getchar();
}