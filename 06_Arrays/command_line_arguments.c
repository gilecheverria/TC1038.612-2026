/*
* Reading command line arguments in main
*
* Gilberto Echeverria
* 2026-11-12
*/

#include <stdio.h>

int len(char* string)
{
    int count = 0;
    // Look for the null character
    while (*string != '\0') {
        count++;
        string++;
    }
    return count;
}

int main(int argc, char* argv[])
{
    printf("I got %d arguments\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] : %s (%d)\n", i, argv[i], len(argv[i]));
    }

    for (int i = 0; i < argc; i++) {
        for (int j = 0; j < len(argv[i]); j++) {
            printf ("%c ", argv[i][j]);
        }
    }




    return 0;
}
