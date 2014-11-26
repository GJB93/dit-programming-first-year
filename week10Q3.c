/* Performing various operations
    on a 3x2 matrix
    Author: Graham Byrne
    Date: 18/11/2014
*/
#include <stdio.h>
#define ROW 3
#define COL 2

main()
{
    //Variable declaration and initialisation
    int matrix[ROW][COL] = { {0,0} };
    int rowSum[ROW] = {0};
    int colSum[COL] = {0};
    int highest = 0;
    int i;
    int j;
    
    //Entering values into the array
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("Enter value matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }//end inner for
    }//end outer for
    
    //Calculating sum of rows
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            rowSum[i] = rowSum[i] + matrix[i][j];
        }//end inner for
    }//end outer for
    
    //Printing sum of rows
    for(i=0;i<ROW;i++)
    {
        printf("Sum of row %d = %d\n", i, rowSum[i]);
    }//end for
    
    //Calculating sum of columns
    for(i=0;i<COL;i++)
    {
        for(j=0;j<ROW;j++)
        {
            colSum[i] = colSum[i] + matrix[j][i];
        }//end inner for
    }//end outer for
    
    //Printing sum of columns
    for(i=0;i<COL;i++)
    {
        printf("Sum of col %d = %d\n", i, colSum[i]);
    }//end for
    
    //initialising highest as the first value in the matrix
    highest = matrix[0][0];
    
    //Finding the highest number in the array
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(highest < matrix[i][j])
            {
                highest = matrix[i][j];
            }//end if
        }//end inner for
    }//end outer for
    
    //Printing highest number
    printf("\nHighest number is %d", highest);
    
    getchar();
    getchar();
}//end main
    