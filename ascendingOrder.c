/* Program to read three numbers
    into an array and display them
    in ascending order
    Author: Graham Byrne
    Date: 4/11/2014
*/
#include <stdio.h>
#define SIZE 3

main()
{
    //Variable declaration and initiation
    int numbers[SIZE] = {0};
    int store = 0;
    int i;
    int j;
    
    //Stating the purpose of the program
    printf("This program reads in %d numbers and displays them in ascending order\n", SIZE);
    
    //Reading into the array
    for(i=0;i<SIZE;i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }//end for
    
    //Checking each value in the array
    for(i=0;i<SIZE;i++)
    {
        for(j=i+1;j<SIZE;j++)
        {
            if(numbers[i] >= numbers[j])
            {
                store = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = store;
            }//end if
        }//end inner for
    }//end outer for
    
    //Printing array in ascending order
    for(i=0;i<SIZE;i++)
    {
        printf("\nnumbers[%d] = %d", i, numbers[i]);
    }//end for
    
    getchar();
    getchar();
    
}//end main()