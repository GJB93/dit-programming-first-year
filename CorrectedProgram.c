/* Program Description:
    This is the correction of an
    incorrectly coded program.
    
    Author: Graham Byrne
    Date: 23/09/2014
*/

/* Original Program:
    #include <stdio.h>; 
    //There is a semi-colon at the end of this statement, causing an error
    
    main[] //Using square brackets instead of regular parentheses ()
    {
        /*Program to illustrate errors in a C program. 
        //Comment doesn't end with correct tag
        
        int i, j;
        float i; 
        //Reassigning i as a float after declaring it as an int, not an error, but bad practice 
        
        j = 40000;
        
        PRINTF("The value of i is %d" i);
        //There is no comma after the quoted statement, so the delimiter doesn't work
        
        PRINT("Size of an integer is %d", sizeof(int));
        //Function is incorrect, should be printf()
        
    ]//Program should end with a closed curly brace (}), not a closed square bracket
*/

//Corrected program
#include <stdio.h>

main()
{
    //Variable declarations
    int i;
    float j;
    
    //Assigning values
    i = 40000;
    
    //Printing out value of i
    printf("The value of i is %d\n", i);
    
    //Printing out the size of an integer in bytes
    printf("Size of an integer is %d", sizeof(int));
    
    getchar();
    
}//end main()

    
    
    
    