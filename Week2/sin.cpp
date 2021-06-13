#include <stdio.h>
#include <math.h> 

int main()
{
    // initialize the input value 
    double x; 
    // prompt the user to enter a value for calculation

    printf("Please enter a value: ");
    
    // save the input value to variable x
    scanf("%lf", &x);
    
    // use the sin function to calculate the input value 
    double sinValue = sin(x);

    // show the result
    printf("\nSin value of %lf is %lf \n", x,sinValue);

    // finish the program
    return 0;

}