/*
* Add a series of numbers into an accumulator,
* using a while loop.
*
* Gilberto Echeverria
* 2026-10-01
*/

#include <stdio.h>

int main()
{
    // Initialize
    int counter = 0;
    int accumulator = 0;

    // Condition
    while (counter < 10) {
        // Update
        counter += 1;
        printf("%d + %d = %d\n", accumulator, counter, accumulator + counter);
        accumulator += counter;
    }

    printf("Total sum: %d\n", accumulator);

    return 0;
}
