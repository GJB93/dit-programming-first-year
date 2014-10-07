/* Program Decription
    Program to receive four
    numbers and display them
    in reverse order
    Author: Graham Byrne
    Date: 7/10/2014
*/
#include <stdio.h>

main()
{
    //Declaring variables
    float num1, num2, num3, num4;
    
    //Initialising variables
    num1 = num2 = num3 = num4 = 0;
    
    //Asking for input
    printf("Please enter any four numbers: \n");
    
    //Receiving input
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    scanf("%f", &num4);
    
    //Displaying input that was received in reverse order
    printf("The numbers received in reverse order are %.1f, %.1f, %.1f and %.1f", num4, num3, num2, num1);
    
    getchar();
    getchar();
    
}//end main()
    