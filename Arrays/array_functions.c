/*
* Program to work with arrays using multiple functions.
* The size of the array will be given at run time.
*
* Gilberto Echeverria
* 2026-11-05
*/

#include <stdio.h>

void get_data(int array[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &array[i]);
    }
}

void show_data(int array[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("Value at %d: %d\n", i, array[i]);
    }
}

/* This function will add the extra_points to any element of
* array with a value less than 50 */
void add_points(int array[], int size, int extra_points)
{
    for (int i = 0; i < size; i++) {
        if (array[i] < 50) {
            array[i] += extra_points;
        }
    }
}

int main()
{
    int size = 0;

    printf("Enter array size: ");
    scanf("%d", &size);

    // Specify the number of elements of the array
    int array[size];

    get_data(array, size);

    show_data(array, size);

    add_points(array, size, 5);

    show_data(array, size);

    return 0;
}
