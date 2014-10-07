/* Program Description
    Program that converts temperature
    from Fahrenheit to Celsius
    Author: Graham Byrne
    Date: 7/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration and initalisation
    float fahrenheit = 0.0;
    float celsius = 0.0;
    
    //User input prompt
    printf("Enter a temperature in degrees Fahrenheit: ");
    
    //Taking input
    scanf("%f", &fahrenheit);
    
    //Calculations
    celsius = (fahrenheit - 32.0)*(5.0/9.0);
    
    //Printing out calculated values
    printf("%.1f degrees Fahrenheit is converted into %.2f degrees Celsius", fahrenheit, celsius);
    
    getchar();
    getchar();
    
}//end main()
    
    