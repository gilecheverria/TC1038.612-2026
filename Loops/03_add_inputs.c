/*
* Add all the numbers entered by the user.
* Stop asking when the user enters 0.
*
* Gilberto Echeverria
* 2026-10-01
*/

#include <stdio.h>

int main()
{
    int total = 0;
    // Initialize, with any number different from 0
    int input  = 1;

    // Condition
    while (input != 0) {
        // Update
        printf("Enter a number: ");
        scanf("%d", &input);

        total += input;
    }
    printf("Total sum: %d\n", total);

    return 0;
}
