/* Program to read five numbers
    into an array and copy the contents
    into another array
    Author: Graham Byrne
    Date: 4/11/2014
*/
#include <stdio.h>
#define SIZE 5

main()
{
    //Variable declaration and initiation
    int numbers[SIZE] = {0};
    int copy[SIZE] = {0};
    int i;
    
    //Stating the purpose of the program
    printf("This program reads in five numbers and copies them to another array");
    
    //Reading into the first array
    for(i=0;i<SIZE;i++)
    {
        printf("\nEnter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }//end for
    
    //Copying values to a second array and printing the value of the copy
    for(i=0;i<SIZE;i++)
    {
        copy[i] = numbers[i];
        printf("\nCopy[%d] = %d", i, copy[i]);
    }//end for
    
    getchar();
    getchar();
    
}//end main()