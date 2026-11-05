/*
* Conversion between Fahrenheit and Celsius temperatures
*
* Gilberto Echeverria
* 2026-09-07
*/

#include <stdio.h>

float f_to_c(float f)
{
    return (f - 32) * 5 / 9;
}

float c_to_f(float c)
{
    float f;
    f = c * 9 / 5 + 32;
    return f;
}

int main()
{
    float celsius;
    float fahrenheit;
    float new_celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = c_to_f(celsius);

    printf("Equivalente in Fahrenheit: %f\n", fahrenheit);

    new_celsius = f_to_c(fahrenheit);

    printf("Back to Celsius: %f\n", new_celsius);

    return 0;
}
