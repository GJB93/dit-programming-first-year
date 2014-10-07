/* Program Description
    Program to calculate and display
    the area of a circle
    Author: Graham Byrne
    Date: 30/9/2014
*/
#include <stdio.h>

main()
{
    //Variable Declaration and Initiation
    float pi = 3.14;
    float r = 0;
    float area = 0;
    
    //Variable assignment
    r = 4.8;
    
    //Calculation
    area = pi*(r*r);
    
    //Print Statements
    printf("The area of the circle is %f cm/sq\n", area);
    
    getchar();
    
}//end main();
    
    