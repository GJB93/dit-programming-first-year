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
    int temp = 0;
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
    //Example: numbers[0] = 10
    for(i=0;i<SIZE;i++)
    {
        //Checking the next value in the array
        //Example: numbers[1] = 9
        for(j=i+1;j<SIZE;j++)
        {
            //If the current number is greater than the next number
            //Example: 10 >= 9 is true
            if(numbers[i] >= numbers[j])
            {
                //Temporarily store the value of the current value
                //Example: temp = 10
                temp = numbers[i];
                
                //As the next value is less than the current value, we have to
                //switch the order of the two numbers within the array
                //Example: numbers[0] = 9
                numbers[i] = numbers[j];
                
                //The next value takes the temporarily stored value of numbers[i]
                //Example: numbers[1] = 10
                numbers[j] = temp;
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