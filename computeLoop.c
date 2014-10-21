/* Program description
    Program to perform arithmetic
    operations depending on the number
    entered
    Author: Graham Byrne
    Date: 21/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration and initiation
    int initialValue = 0;
    int nextValue = 0;
    int previousValue = 0;
    int counter = 0;
    
    //Loop to ensure correct input
    while(initialValue<=0)
    {
        //Prompt for input
        printf("Enter a positive integer: ");
        
        //Taking input
        scanf("%d", &initialValue);
        
        //Checking input for error
        if (initialValue <= 0)
        {
            printf("\nNumber is 0 or negative, enter another number.\n");
        }//end if
    }//end while
    
    printf("\nInitial value is %d", initialValue);
    
    //Setting nextValue for use in loop
    nextValue = initialValue;
    
    //Operations loop
    while (nextValue!=1)
    {
        printf("\nNext value is %d", nextValue);
        
        //Setting values for reuse in the loop
        previousValue = nextValue;
        nextValue = 0;
        
        if ((previousValue%2)==0)
        {
            nextValue = previousValue/2;
        }//end if
        else
        {
            nextValue = (previousValue*3) + 1;
        }//end else
        
        counter++;
        
    }//end while
    
    printf("\nFinal value is %d, number of steps %d", nextValue, counter);
    
    getchar();
    getchar();
    
}//end main