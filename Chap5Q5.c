/* Program Decription
    Program to determine whether 
    a triangle is valid
    Author: Graham Byrne
    Date: 14/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declaration
    float side1;
    float side2;
    float side3;
    
    //Variable initialisation
    side1 = side2 = side3 = 0.0;
    
    //Program description
    printf("This program determines the validity of a triangle given the\nlength of its three sides.\n");
    
    //Asking for and taking input
    printf("\nEnter the value of the first side: ");
    scanf("%f", &side1);
    
    printf("Enter the value of the second side: ");
    scanf("%f", &side2);
    
    printf("Enter the value of the third side: ");
    scanf("%f", &side3);
    
    if(((side1+side2)>side3)&&((side2+side3)>side1)&& 
        ((side1+side3)>side2))
    {
        printf("\nThis is a valid triangle");
    }//end if
    else
    {
        printf("\nThis is not a valid triangle");
    }//end else
    
    getchar();
    getchar();
    
}//end main()