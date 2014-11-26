/* Program using a 3x2 array
    Author: Graham Byrne
    Date: 11/11/2014
*/
#include <stdio.h>
#define ROW 3
#define COL 2

main()
{
    //Variable declaration and initiation
    int matrix[ROW][COL] = {{0,0}};
    int largest = 0;
    int smallest = 0;
    int total = 0;
    int average = 0;
    int i = 0;
    int j = 0;
    
    //Enter values into the array
    //Outer for deals with rows
    for(i=0;i<ROW;i++)
    {
        //Inner for deals with columns
        for(j=0;j<COL;j++)
        {
            //Prompting user for input, and receiving the input
            printf("Enter value for matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            
            //Adding value to total
            total = total + matrix[i][j];
        }//end inner for
    }//end outer for
    
    //Display values in the array
    //Outer for deals with rows
    for(i=0;i<ROW;i++)
    {
        //Inner for deals with columns
        for(j=0;j<COL;j++)
        {
            //Displaying the value
            printf("\nValue for matrix[%d][%d]: %d", i, j, matrix[i][j]);
        }//end inner for
    }//end outer for
    
    //Initialising largest and smallest
    largest = matrix[0][0];
    smallest = matrix[0][0];
    
    //For loop to find largest and smallest values
    //Outer for deals with rows
    for(i=0;i<ROW;i++)
    {
        //Inner for deals with columns
        for(j=0;j<COL;j++)
        {
            //Prompting user for input, and receiving the input
            if(matrix[i][j] > largest)
            {
                largest = matrix[i][j];
            }//end if
            if(matrix[i][j] < smallest)
            {
                smallest = matrix[i][j];
            }//end if
        }//end inner for
    }//end outer for
    
    //Calculating average
    average = total/(ROW+COL);
    
    //Printing smallest, largest and average
    printf("\n\nThe smallest value was %d", smallest);
    printf("\nThe largest value was %d", largest);
    printf("\nThe average value was %d", average);
    
    getchar();
    getchar();
    
}//end main