/* Program Description
    Program to display floating-
    point numbers in a specific way
    Author: Graham Byrne
    Date: 7/10/2014
*/
#include <stdio.h>

main()
{
    float v1 = 5.0;
    float v2 = -4.5;
    float v3 = 11.25;
    
    printf("The floating-point numbers are displayed as %.0f, %.1f and %.2f", v1, v2, v3);
    
    getchar();
    
}//end main()