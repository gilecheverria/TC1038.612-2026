/*
* Compute the area of a triangle, given the base and height
*
* Gilberto Echeverria
* 2026-08-27
*/

#include <stdio.h>

int main()
{
    float base;
    float height;

    float area;

    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);

    area = base * height / 2;

    printf("Area: %f\n", area);

    return 0;
}
