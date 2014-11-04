/* Program to read four numbers
    into an array, print the array in order,
    then switch the number order and
    print it again
    Author: Graham Byrne
    Date: 4/11/2014
*/
#include <stdio.h>
#define SIZE 4

main()
{
    //Variable declaration and initiation
    int numbers[SIZE] = {0};
    int copy[SIZE] = {0};
    int i;
    
    //Stating the purpose of the program
    printf("This program reads in four numbers, prints them, then switches the order\n");
    
    //Reading into the first array
    for(i=0;i<SIZE;i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }//end for
    
    //Printing array in original order
    printf("\nOriginal Order");
    for(i=0;i<SIZE;i++)
    {
        printf("\nnumbers[%d] = %d", i, numbers[i]);
    }//end for
    
    //Copying the array for order switching
    for(i=0;i<SIZE;i++)
    {
        copy[i] = numbers[i];
    }//end for
    
    //Switching order
    numbers[0] = copy[1];
    numbers[1] = copy[0];
    numbers[2] = copy[3];
    numbers[3] = copy[2];
    
    printf("\n");
    
    //Printing new order
    printf("\nFirst and second switched, third and fourth switched");
    for(i=0;i<SIZE;i++)
    {
        printf("\nnumbers[%d] = %d", i, numbers[i]);
    }//end for
    
    getchar();
    getchar();
    
}//end main()