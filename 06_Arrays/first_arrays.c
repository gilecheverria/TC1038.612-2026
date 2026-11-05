/*
* First program using arrays of a fixed size,
* and using indices to access the elements.
*
* Gilberto Echeverria
* 2026-11-02
*/

#include <stdio.h>

float average(int data[], int size)
{
    float total = 0.0;
    for (int i = 0; i < size; i ++) {
        total += data[i];
    }
    return total / size;
}

int main()
{
    // Declare an array with predefined elements
    int data[] = { 99, 88, 77, 66, 55, 44, 33, 222 };
    // Indices:     0   1   2   3   4
    int size = sizeof data / sizeof data[0];

    printf("Sizeof data: %d\n", size);

    // Prints the address of the array
    printf("Data: %p\n", data);

    // Print the contents of elements
    printf("Elem 3: %d\n", data[3]);
    printf("Elem 4: %d\n", data[4]);

    // Using the variables as any regular one
    data[3] = data[0] + data[2];

    // Using loops to work with arrays
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, data[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("Address: %p | Value: %d\n", (data + i), *(data + i));
    }

    printf("Average value: %f\n", average(data, size));


    return 0;
}
