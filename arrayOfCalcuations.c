/* Program description
    Program to compute an array
    of calculations
    Author: Graham Byrne
    Date: 30/9/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration and intitiation
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    float sum4 = 0;
    int sum5 = 0;
    
    //Calculations
    sum1 = 15 + 10;
    sum2 = 15 - 10;
    sum3 = 15 * 10;
    sum4 = (float) 15 / 10;
    sum5 = 15 % 3;
    
    //Print Statements
    printf("The result of sum1 is %d\n", sum1);
    printf("The result of sum2 is %d\n", sum2);
    printf("The result of sum3 is %d\n", sum3);
    printf("The result of sum4 is %f\n", sum4);
    printf("The result of sum5 is %d\n", sum5);
    
    getchar();
    
}//end main()