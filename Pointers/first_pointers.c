/*
* Learning about pointers and memory addresses
*
* Gilberto Echeverria
* 2026-10-22
*/

#include <stdio.h>

int main()
{
    int number = 4587;
    int second = 5555;

    int * ptr1;

    printf("Before initialization: %p\n", ptr1);

    /*number = second;*/

    // Store an address in the pointer
    ptr1 = &number;
    *ptr1 = 7777;
    int * ptr2 = ptr1 + 1;

    // Segmentation fault if I try to access undefined memory location
    *ptr1 = 9999;


    // Use the & symbol to get the address of the variable
    printf("The value is: %d | the address: %p\n", number, &number);
    printf("The value is: %d | the address: %p\n", second, &second);

    printf("Pointer value: %p | address: %p | points to: %d\n", ptr1, &ptr1, *ptr1);
    printf("Pointer value: %p | address: %p | points to: %d\n", ptr2, &ptr2, *ptr2);

    return 0;
}
