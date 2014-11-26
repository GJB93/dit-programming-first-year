/* Floating point arrays, displayed
    and entered to using pointers
    Author: Graham Byrne
    Date: 26/11/2014
*/
#include <stdio.h>
#define SIZE 3

main()
{
    //Variable declaration and initialisation
    float array1[SIZE] = {0.0};
    float array2[SIZE] = {0.0};
    int i;
    
    printf("Enter three floating-point numbers\n");
    
    //Taking input
    for(i=0;i<SIZE;i++)
    {
        scanf("%f", &*(array1 + i));
    }
    
    //Copying the contents of array1 into array2
    for(i=0;i<SIZE;i++)
    {
        *(array2 + i) = *(array1 + i);
    }
    
    //Printing the content of both arrays
    for(i=0;i<SIZE;i++)
    {
        printf("Array1[%d] = %.1f\n", i, *(array1 + i));
        printf("Array2[%d] = %.1f\n", i, *(array2 + i));
    }
    
    
    getchar();
    getchar();
}//end main()