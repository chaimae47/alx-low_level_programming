#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int total_days;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        if (month > 2)
        {
            total_days = 60 + day - 1; /* Account for the leap year day (Feb 29th) */
        }
        else if (month == 2 && day == 29)
        {
            printf("Day of the year: 60\n");
            printf("Remaining days: 306\n");
            return;
        }
        else
        {
            total_days = 31 + day;
        }
    }
    else
    {
        if (month > 2)
        {
            total_days = 59 + day;
        }
        else
        {
            total_days = 31 + day;
        }
    }

    printf("Day of the year: %d\n", total_days);
    printf("Remaining days: %d\n", (total_days > 365) ? 365 - total_days : 365 - total_days + 1);
}
