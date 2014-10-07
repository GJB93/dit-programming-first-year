/* Program Description
    Program to calculate the volume
    and surface area of a box
    Author: Graham Byrne
    Date: 30/9/2014
*/
#include <stdio.h>

main()
{
    //Variable Declaration and Initiation
    float height = 0;
    float length = 0;
    float width = 0;
    float volume = 0;
    float surfaceArea = 0;
    
    //Variable assignment
    height = 10.0;
    length = 11.5;
    width = 2.5;
    
    //Calculations
    volume = length * width * height;
    surfaceArea = (2*length*width) + (2*length*height) + (2*width*height);
    
    //Printing out values
    printf("The volume of the box is %f cm^3\n", volume);
    printf("The surface area of the box is %f cm/sq\n", surfaceArea);
    
    getchar();
    
}//end main()
    
    