/* Program to initialise
    and use 2-D arrays in
    calculations
    Author: Graham Byrne
    Date: 18/11/2014
*/
#include <stdio.h>
#define ROW 3
#define COL 4

main()
{
    //Variable declaration and initialisation
    int array1[ROW][COL] =  {   {4,3,5,7},
                                {5,9,4,5},
                                {6,9,2,3}
                            };
    int array2[ROW][COL] =  {   {5,8,9,3},
                                {3,5,8,6},
                                {4,5,6,5}
                            };
    int array3[ROW][COL] =  {{0,0,0,0}};
    int i;
    int j;
    
    //Calculations
    //Outer for handles rows
    for (i=0;i<ROW;i++)
    {
        //Inner for handles columns
        for(j=0;j<COL;j++)
        {
            array3[i][j] = array1[i][j] * array2[i][j];
            printf("%d X %d = %d\n", array1[i][j], array2[i][j], array3[i][j]);
        }//end for
    }//end for
    
    getchar();
    
}//end main
