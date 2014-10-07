/* Program Description:
    Declaring the three different variables
    discussed in lectures, int, float and char.
    Printing out variables using wrong delimiters
    
    Author: Graham Byrne
    Date: 23/09/2014
*/

#include <stdio.h>

main()
{
    //Variable Declarations
    int var1;
    float var2;
    char var3;
    
    //Assigning values to variables
    var1 = 16;
    var2 = -18.50;
    var3 = 'A';
    
    //Printing out variable values using delimiters
    printf("var1 contains %d\n", var1);
    //Using %f delimiter on int prints out -83886080.000000
    //Using %c delimiter on int prints out DLE
    
    printf("var2 contains %f\n", var2);
    //Using %d delimiter on float prints out 0
    //Using %c delimiter on float prints out NULL
    
    printf("var3 contains %c\n", var3);
    //Using %d delimiter on char prints out 65. This is the ASCII value of 'A'
    //Using %f delimiter on char prints out -83886080.000001
    
    getchar();
}//end main()