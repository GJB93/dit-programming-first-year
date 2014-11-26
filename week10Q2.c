/* Completing a program with
    a given initial design
    Author: Graham Byrne
    Date: 18/11/2014
*/
#include <stdio.h>
#define ROW 4
#define COL 6

main()
{
    int data[ROW][COL] ={   {3, 2, 5, 7, 4, 2},
                            {1, 4, 4, 8, 13, 1},
                            {9, 1, 0, 2, 0, 0},
                            {0, 2, 6, 3, -1, -8}
                        };
    // declare the sum
    int i, j;
    int sum = 0;
    
    
    // compute the sum
    for ( i=0; i<ROW; i++)
    {
        for ( j=0; j < COL; j++)
        {
            // calculate the sum here
            sum = sum + data[i][j];
        }
    }
    // display the sum
    printf("The sum was %d", sum);
    
    getchar();
}