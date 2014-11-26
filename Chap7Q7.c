/* Program using a 3x2 array and
    printing values that are less then 0
    along with their position in the matrix
    Author: Graham Byrne
    Date: 11/11/2014
*/
#include <stdio.h>
#define ROW 4
#define COL 5

main()
{
    //Variable declaration and initiation
    int matrix[ROW][COL] = {{0,0}};
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
        }//end inner for
    }//end outer for
    
    //For loop to find values less than 0
    //Outer for deals with rows
    for(i=0;i<ROW;i++)
    {
        //Inner for deals with columns
        for(j=0;j<COL;j++)
        {
            if(matrix[i][j] < 0)
            {
                printf("\nValue for matrix[%d][%d]: %d", i, j, matrix[i][j]);
            }//end if
        }//end inner for
    }//end outer for
    
    getchar();
    getchar();
}//end main