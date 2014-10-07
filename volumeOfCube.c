/* Program Description
    Program to calculate and display
    the volume of a cube
    Author: Graham Byrne
    Date: 30/9/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration and intiation
    float length = 0;
    float volume = 0;
    
    //Variable assignment
    length = 2.8;
    
    //Calculation
    volume = length*length*length;
    
    //Print Statements
    printf("The volume of the cube is %f\n cm^3", volume);
    
    getchar();
    
}//end main()
    
    