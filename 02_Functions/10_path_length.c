/*
 * Program to compute the total distance of a route, described as a
 * series of 2D points, given in order.
 *
 * Gilberto Echeverria
 * 2026-09-02
 */

#include <stdio.h>
#include <math.h>


// Define a new function
float measure_distance(float pAX, float pAY, float pBX, float pBY)
{
    float distance;
    distance = sqrt(pow(pBX - pAX, 2) + pow(pBY - pAY, 2));
    return distance;
}


int main()
{
    // Define the variables to store the coordinates of multiple points
    float p1X;
    float p1Y;
    float p2X;
    float p2Y;
    float p3X;
    float p3Y;
    float p4X;
    float p4Y;
    float p5X;
    float p5Y;

    // Get the coordinates of 5 points
    printf("Enter point 1, coordinate X: ");
    scanf("%f", &p1X);
    printf("Enter point 1, coordinate Y: ");
    scanf("%f", &p1Y);
    printf("Enter point 2, coordinate X: ");
    scanf("%f", &p2X);
    printf("Enter point 2, coordinate Y: ");
    scanf("%f", &p2Y);
    printf("Enter point 3, coordinate X: ");
    scanf("%f", &p3X);
    printf("Enter point 3, coordinate Y: ");
    scanf("%f", &p3Y);
    printf("Enter point 4, coordinate X: ");
    scanf("%f", &p4X);
    printf("Enter point 4, coordinate Y: ");
    scanf("%f", &p4Y);
    printf("Enter point 5, coordinate X: ");
    scanf("%f", &p5X);
    printf("Enter point 5, coordinate Y: ");
    scanf("%f", &p5Y);

    // Compute the distances, calling the function
    float distance1_2 = measure_distance(p1X, p1Y, p2X, p2Y);
    float distance2_3 = measure_distance(p2X, p2Y, p3X, p3Y);
    float distance3_4 = measure_distance(p3X, p3Y, p4X, p4Y);
    float distance4_5 = measure_distance(p4X, p4Y, p5X, p5Y);

    float total_distance = distance1_2 + distance2_3 + distance3_4 + distance4_5;

    printf("Total distance: %f\n", total_distance);

    return 0;
}
