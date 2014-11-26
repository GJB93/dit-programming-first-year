/* Using pointers in
    basic arithmetic
    Author: Graham Byrne
    Date: 26/11/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration and initialisation
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    int *ptr1;
    int *ptr2;
    int *ptr3;
    
    //Setting the pointers to point to variable addresses
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &sum;
    
    //Prompting user for input
    printf("Please enter two integer values\n");
    scanf("%d%d", &*ptr1, &*ptr2);
    
    //Calculating the sum of the two integers
    *ptr3 = *ptr1 + *ptr2;
    
    //Printing the sum
    printf("%d + %d = %d", *ptr1, *ptr2, *ptr3);
    
    getchar();
    getchar();
    
}