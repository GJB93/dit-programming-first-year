/* Program to read five numbers
    into an array and reverse the 
    order of the array
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
    printf("This program reads in five numbers and copies them to another array with reversed order");
    
    //Reading into the first array
    for(i=0;i<SIZE;i++)
    {
        printf("\nEnter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }//end for
    
    //Copying values to a second array and reversing the order
    for(i=SIZE-1;i>-1;i--)
    {
        copy[i] = numbers[(SIZE-1)-i];
    }//end for
    
    //Printing reverse order
    for(i=0;i<SIZE;i++)
    {
        printf("\nCopy[%d] = %d", i, copy[i]);
    }
    
    getchar();
    getchar();
    
}//end main()