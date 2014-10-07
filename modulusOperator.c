/* Program Description
    Program to show how the
    modulus operator (%) functions
    Author: Graham Byrne
    Date: 30/9/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration and initiation
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;
    int sum5 = 0;
    int sum6 = 0;

    //Calculations
    sum1 = 2%2;
    sum2 = 3%2;
    sum3 = 5%2;
    sum4 = 7%3;
    sum5 = 100%33;
    sum6 = 100%7;
    
    //Print statements
    printf("The value of the remainder of sum1 is %d\n", sum1);
    printf("The value of the remainder of sum2 is %d\n", sum2);
    printf("The value of the remainder of sum3 is %d\n", sum3);
    printf("The value of the remainder of sum4 is %d\n", sum4);
    printf("The value of the remainder of sum5 is %d\n", sum5);
    printf("The value of the remainder of sum6 is %d\n", sum6);
    
    getchar();
    
}//end main()