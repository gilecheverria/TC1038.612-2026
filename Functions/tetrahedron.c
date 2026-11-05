/*
* Compute the volume of a tetrahedron
*
* V = a³ / 6 sqrt 2
*
*/

#include <stdio.h>
#include <math.h>

float tetrahedron_volume(float a)
{
    float V;
    V = pow(a, 3) / (6 * sqrt(2));
    return V;
}


int main()
{
    float a;
    float V;

    printf("Enter the length of side a: ");
    scanf("%f", &a);

    V = tetrahedron_volume(a);
    printf("Volume of tetrahedron: %f\n", V);
    V = tetrahedron_volume(4.12);
    printf("Volume of tetrahedron: %f\n", V);
    V = tetrahedron_volume(843.234);
    printf("Volume of tetrahedron: %f\n", V);
    V = tetrahedron_volume(9873.2);
    printf("Volume of tetrahedron: %f\n", V);

    return 0;
}
