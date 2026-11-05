/*
* My first program using while loops.
*
* Gilberto Echeverria
* 2026-10-01
*/

#include <stdio.h>

int main()
{
    // Initialize
    int i = 0;
    // Condition
    while (i < 10) {
        // Update
        i++;
        printf("%d\n", i);
        /*
        if (i % 10000 == 0) {
            printf("%d\n", i);
        }
        */
    }
    printf("\n");

    return 0;
}
