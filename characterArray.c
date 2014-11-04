/* Program to read five characters
    into an array and print them
    Author: Graham Byrne
    Date: 4/11/2014
*/
#include <stdio.h>
#define SIZE 5

main()
{
    //Variable declaration and initiation
    char characters[SIZE] = {' '};
    int i;
    
    //Stating the purpose of the program
    printf("This program reads in five characters and displays them back again");
    
    //Reading into the first array
    for(i=0;i<SIZE;i++)
    {
        printf("\nEnter character %d: ", i+1);
        scanf("%1s", &characters[i]);
    }//end for
    
    //Printing the values of the array
    for(i=0;i<SIZE;i++)
    {
        printf("\ncharacters[%d] = %c", i, characters[i]);
    }//end for
    
    getchar();
    getchar();
    
}//end main()