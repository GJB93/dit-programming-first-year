/* Understanding errors
    in pointers
    Author: Graham Byrne
    Date: 18/11/2014
*/
#include <stdio.h>

main()
{
    // code
    int var1;
    int *ptr;
    var1 = 1;
    ptr = &var1;
   
    printf("\nthe address of var1 is %p\n", &var1); //the %d should be %p
    printf("\nptr contains %p\n", ptr); /*there is a missing & and should be
                                                                                                        &ptr */
    printf("\nthe address of ptr is %p\n", &ptr);
    printf("\n*ptr contains %d\n", *ptr); /* there is a missing * (indirection
                                                                operator) and therefore should be *ptr*/
    
    getchar();
}//end main