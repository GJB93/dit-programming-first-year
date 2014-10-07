/* Program Description:
    Declaring and printing the three different variables
    discussed in lectures, int, float and char.
    
    Author: Graham Byrne
    Date: 23/09/2014
*/

#include <stdio.h>

main()
{
    //Variable Declarations
    int v1;
    float v2;
    char v3;
    
    //Assigning values to variables
    v1 = 65;
    v2 = -18.23;
    v3 = 'a';
    
    //Printing out variable values using delimiters
    printf("v1 contains %d\n", v1);
    printf("v2 contains %f\n", v2);
    printf("v3 contains %c\n", v3);
    
    getchar();
}//end main()