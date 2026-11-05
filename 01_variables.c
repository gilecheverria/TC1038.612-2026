/*
* First examples of variables in a program.
*
* Gilberto Echeverria
*/

// Indicate that I want to use the standard input/output library
#include <stdio.h>

// There must always be a main function. This is where the progam starts
int main()
{
    // A variable that holds an integer number
    int current_year = 2028;

    printf("Enter the current year: ");
    // Ask for an input from the user
    scanf("%d", &current_year);

    printf("This is the year %d\n", current_year);
    printf("You should graduate in the year %d\n", current_year + 4);
    printf("You were probably born around %d\n", current_year - 18);

    return 0;
}
