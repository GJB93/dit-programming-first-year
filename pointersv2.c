/*  Program that uses
    pointers and the indirection
    operator
    Author: Graham Byrne
    Date: 26/11/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration and initialisation
    int num1 = 5;
    int *ptr1;
    //Q2. Program doesn't compile, the pointer wasn't initialised as the same data type it pointed to
    //int *ptr3;
    char char1 = 'A';
    char *ptr2;
    
    //Initialising pointers
    ptr1 = &num1;
    ptr2 = &char1;
    //ptr3 = &char1;
    
    //Printing content and address of two variables
    printf("num1 contains %d\n", num1);
    printf("num1 is contained at address %p\n", &num1);
    printf("char1 contains %c\n", char1);
    printf("char1 is contained at address %p\n", &char1);
    
    //Printing the content of the two pinter variables
    printf("ptr1 contains %p\n", ptr1);
    printf("ptr2 contains %p\n", ptr2);
    printf("ptr1 is contained at address %p\n", &ptr1);
    printf("ptr2 is contained at address %p\n", &ptr2);
    
    //Printing the content of the address the pointers refer to
    printf("The contents of the address pointed to by ptr1 is %d\n", *ptr1);
    printf("The contents of the address pointed to by ptr2 is %c", *ptr2);
    
    getchar();
    
    
    
}