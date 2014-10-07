/* Program Description
    Program to calculate the number
    of beats someones heart has made
    over their lifetime, given by their
    age in years
    Author: Graham Byrne
    Date: 7/10/2014
*/
#include <stdio.h>

main()
{
    //variable declarations
    int age;
    double beats;
    double minutes;
    
    //variable initialisations
    age = beats = minutes = 0;
    
    //Ask for input
    printf("What is your age? ");
    
    //Take input
    scanf("%d", &age);
    
    //Confirm input
    //printf("\nYou input %d years old", age);
    
    //Calculations
    minutes = age * 525949.0;
    //printf("\nminutes = %f", minutes);
    beats = minutes * 75.0;
    //printf("\nbeats = %f", beats);
    
    //Print out values
    printf("Your heart has beaten %.0f times in your lifetime", beats);
    
    getchar();
    getchar();
    
}//end main()
    
    