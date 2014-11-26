/* Program to check the contents of
    a certain block of an array after
    preforming operations on and with
    it
    Author: Graham Byrne
    Date: 11/11/2014
*/
#include <stdio.h>
#define SIZE 10

main()
{
    //Variable declaration and initiation
    int i = 0;
    int a[SIZE] = {0};
    
    //For loop fills each block in the array in descending order
    for (i = 0; i < 10; i++)
    {
        a[i] = 9-i;
    }//end for
    
    //Refilling each block in the array by using the value within the array block to
    //determine which block to fill
    for (i = 0;i < 10; i++)
    {
        a[i] = a[ a[i] ];
    }//end for
    
    //Printing value of a[8]
    printf("a[8] = %d", a[8]);
    
    getchar();
}//end main