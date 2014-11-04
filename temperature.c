/* Program Description
    Program that converts three temperature
    readings from fahrenheit to celsius
    Author: Graham Byrne
    Date: 4/11/2014
*/
#include <stdio.h>
#define SIZE 3

main()
{
    //Variable declaration and initalisation
    float fahrenheit[SIZE] = {0.0};
    float celsius[SIZE] = {0.0};
    int i;
    
    //User input prompt
    for(i=0;i<SIZE;i++)
    {
        printf("Enter temperature %d in degrees Fahrenheit: ", i+1);
        
        //Taking input
        scanf("%f", &fahrenheit[i]);
    }//end for
    
    //Calculation loop
    for(i=0;i<SIZE;i++)
    {
        //Calculations
        celsius[i] = (fahrenheit[i] - 32.0)*(5.0/9.0);
        
        //Printing out calculated values
        printf("\n%.1f degrees Fahrenheit is converted into %.2f degrees Celsius", fahrenheit[i], celsius[i]);
    
    }//end for
    
    getchar();
    getchar();
    
}//end main()