/* Program Description
    Program to calculate and display
    the sum of integers, and to display the 
    average of an array of floating point
    numbers
    Author: Graham Byrne
    Date: 30/9/2014
*/
#include <stdio.h>

main()
{
    //Variable Declaration
    int sum;
    float average;
    
    //Variable initiation
    sum = 0;
    average = 0;
    
    //Calculations
    sum = 1 + 2 + 3 + 4 + 5;
    average = (1.0 + 1.1 + 1.2 + 1.3 + 1.4 + 1.5 + 1.6
                + 1.7 + 1.8 + 1.9 + 2.0)/11;
    
    //Printing out values from calculations
    printf("The sum of the integers 1 to 5 is %d\n", sum);
    printf("The average of the floating point numbers is %f\n", average);
    
    getchar();
    
}//end main()