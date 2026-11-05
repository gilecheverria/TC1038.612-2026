/*
* Compute the volume of a cylinder, given its radius and height
*
* Gilberto Echeverria
*/

// Indicate that I want to use the standard input/output library
#include <stdio.h>

// There must always be a main function. This is where the progam starts
int main()
{
    float radius;
    float height;
    float volume;
    float pi = 3.14159;

    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter radius: ");
    scanf("%f", &radius);

    volume = pi * radius * radius * height;

    printf("The volume is: %f\n", volume);

    return 0;
}
