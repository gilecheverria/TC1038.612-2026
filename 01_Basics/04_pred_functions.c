/*
* Working with predefined mathematical functions
*
* Gilberto Echeverria
* 2026-08-31
*/

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Expression 1: %d\n", 5 + 3 * 2);
    printf("Expression 2: %d\n", (5 + 3) * 2);

    printf("Expression 4: %f\n", pow(2, 3) + 5);

    printf("Expression 8: %d\n", 5 * 2 - 3 / 2 + (int)pow(4, 2) % 5);

    printf("PI is: %f\n", M_PI);


    float sideA;
    float sideB;
    float hypot;
    printf("Enter side A: ");
    scanf("%f", &sideA);
    printf("Enter side B: ");
    scanf("%f", &sideB);

    hypot = sqrt(pow(sideA, 2) + pow(sideB, 2));

   printf("Hypotenuse: %f\n", hypot);


    return 0;
}
