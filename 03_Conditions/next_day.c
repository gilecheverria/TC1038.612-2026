/*
* Find the date of the next day
*
*/

#include <stdio.h>

int main()
{
    int year;
    int month;
    int day;
    int last_day;

    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter day: ");
    scanf("%d", &day);

    // Check February
    if (month == 2) {
        // Check if the year is leap
        if (year % 4 == 0) {
            last_day = 29;
        } else {
            last_day = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        last_day = 30;
    } else {
        last_day = 31;
    }



    printf("Next day: %d / %d / %d\n", day, month, year);

    return 0;
}
