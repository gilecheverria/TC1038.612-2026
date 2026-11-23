/*
* Reading and writing files from a C program.
*
* Gilberto Echeverria
* 2026-11-23
*/

#include <stdio.h>

float add_file_numbers(char* filename)
{
    // Open the file in reading mode
    FILE* fp = fopen(filename, "r");
    // Validate that it could be opened
    if (fp == NULL) {
        printf("Unable to open file %s\n", filename);
        return -1;
    }

    // Read two numbers from the file
    float num_a;
    float num_b;
    float result;

    // Read two values from the file
    fscanf(fp, "%f", &num_a);
    fscanf(fp, "%f", &num_b);

    // Make sure to close the file to avoid problems
    fclose(fp);

    result = num_a + num_b;

    return result;
}

int save_result(char* filename, float result)
{
    // Open the file in write mode
    FILE* fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Unable to open file %s\n", filename);
        return -1;
    }

    // Write a number into the file
    fprintf(fp, "%f", result);

    fclose(fp);

    return 0;
}

int main(int argc, char* argv[])
{
    if (argc == 2) {
        float result = add_file_numbers(argv[1]);
        if (result == -1) {
            printf("Error reading file\n");
        } else {
            printf("Result is %f\n", result);
            save_result("output.txt", result);
        }
    } else {
        printf("Usage: %s <filename>\n", argv[0]);
    }

    return 0;
}
