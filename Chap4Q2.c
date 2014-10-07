/* Program Description
    Inputting values from
    the keyboard using a single
    scanf() statement for each part
    from (a) to (e)
    Author: Graham Byrne
    Date: 7/10/2014
*/
#include <stdio.h>

main()
{
    //Variable declarations for question parts
    int first; //(a)
    int second, third, fourth; //(b)
    float principal, rate, time; //(c)
    char keyval1, keyval2; //(d)
    
    //{all (e)
    char c;
    int i;
    float f;
    double d;
    //}
    
    //{(a)
    printf("Enter one integer number: \n");
    scanf("%d", &first);
    printf("\nYou entered %d", first);
    //}end (a)
    
    //{(b)
    printf("\nEnter three integer numbers: \n");
    scanf("%d %d %d", &second, &third, &fourth);
    printf("\nYou entered %d, %d and %d", second, third, fourth);
    //}end (b)
    
    //{(c)
    printf("\nEnter three floating-point numbers: \n");
    scanf("%f %f %f", &principal, &rate, &time);
    printf("\nYou entered %.1f, %.1f and %.1f", principal, rate, time);
    //}end (c)
    
    //{(d)
    printf("\nEnter two character variables: \n");
    scanf("%1s %1s", &keyval1, &keyval2);
    printf("\nYou entered %c and %c", keyval1, keyval2);
    //}end (d)
    
    //{(e)
    printf("\nEnter a character, an integer, a floating-point number and a double, in that order: \n");
    scanf("%1s %d %f %lf", &c, &i, &f, &d);
    printf("\nYou entered %c, %d, %.1f and %.1lf", c, i, f, d);
    //}end (e)
    
    getchar();
    getchar();
    
}//end main()
    
    
    