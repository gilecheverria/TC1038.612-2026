/*

Program to print a pyramid of numbers.
Each number is printed as many times as its value.

1
2 2
3 3 3
4 4 4 4
...

Gilberto Echeverria
2026-10-08
*/

#include <stdio.h>

int main()
{
    int limit;

    printf("Enter the size of the pyramid: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++) {
        for (int j = 1; j < i; j++) {
            printf("%2d ", i);
        }
        printf("%2d\n", i);
    }

    return 0;
}
