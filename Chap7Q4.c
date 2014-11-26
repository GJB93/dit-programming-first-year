/* Program to read fifteen numbers
    into an array and reverse the 
    order of the array
    Author: Graham Byrne
    Date: 11/11/2014
*/
#include <stdio.h>
#define SIZE 15

main()
{
    //Variable declaration and initiation
    int numbers[SIZE] = {0};
    int copy[SIZE] = {0};
    int i;
    
    //Stating the purpose of the program
    printf("This program reads in %d numbers and copies them to another array\nwith reversed order\n", SIZE);
    
    //Reading into the first array
    for(i=0;i<SIZE;i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }//end for
    
    //Copying values to a second array and reversing the order
    for(i=SIZE-1;i>-1;i--)
    {
        copy[i] = numbers[(SIZE-1)-i];
    }//end for
    
    //Printing values on new lines
    printf("\nNew line: ");
    for(i=0;i<SIZE;i++)
    {
        printf("%d\n", numbers[i]);
    }
    
    //Printing values on same line
    printf("\nSame line: ");
    for(i=0;i<SIZE;i++)
    {
        printf("%d, ", numbers[i]);
    }
    
    //Printing reverse order
    printf("\nReverse Order: ");
    for(i=0;i<SIZE;i++)
    {
        printf("%d, ", copy[i]);
    }
    
    getchar();
    getchar();
    
}//end main()