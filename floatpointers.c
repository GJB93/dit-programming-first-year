/*  Program that uses
    pointers and the indirection
    operator with float variables
    Author: Graham Byrne
    Date: 26/11/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration and initialisation
    float input1 = 2.345;
    float input2 = 6.789;
    float *ptr1;
    float *ptr2;
    
    //Initialising pointers
    ptr1 = &input1;
    ptr2 = &input2;
    
    //Printing content and address of two variables
    printf("input1 is contained at address %p\n", &input1);
    printf("input2 is contained at address %p\n", &input2);
    
    //Printing the content of the two pointer variables
    printf("ptr1 is contained at address %p\n", &ptr1);
    printf("ptr2 is contained at address %p\n", &ptr2);
    printf("ptr1 contains %p\n", ptr1);
    printf("ptr2 contains %p\n", ptr2);
    
    //Printing the content of the address the pointers refer to
    printf("The contents of the address pointed to by ptr1 is %f\n", *ptr1);
    printf("The contents of the address pointed to by ptr2 is %f", *ptr2);
    
    getchar();
    
    
    
}