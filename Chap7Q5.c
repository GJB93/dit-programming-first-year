/* Program to read fifteen numbers
    into an array and reverse the 
    order of the array
    Author: Graham Byrne
    Date: 11/11/2014
*/
#include <stdio.h>
#define SIZE 5

main()
{
    //Variable declaration and initiation
    int firstArray[SIZE] = {0};
    int secondArray[SIZE] = {0};
    int product = 0;
    int i;
    
    //Stating the purpose of the program
    printf("This program reads in %d numbers into two different arrays, and multiplies \ncorresponding values together\n", SIZE);
    
    //Reading into the first array
    for(i=0;i<SIZE;i++)
    {
        printf("Enter number %d into first array: ", i+1);
        scanf("%d", &firstArray[i]);
    }//end for
    
    //Reading into the second array
    for(i=0;i<SIZE;i++)
    {
        printf("Enter number %d into second array: ", i+1);
        scanf("%d", &secondArray[i]);
    }//end for
    
    //Multiplying corresponding values
    for(i=0;i<SIZE;i++)
    {
        product = firstArray[i] * secondArray[i];
        printf("\nThe product of %d and %d is %d", firstArray[i], secondArray[i], product);
    }//end for
    
    getchar();
    getchar();
}//end main