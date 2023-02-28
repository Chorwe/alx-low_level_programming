#include <stdio.h>
#include "main.h"

// Function to determine if a given year is a leap year
int isLeapYear(int year) {
    if (year % 400 == 0) {
        return 1;
    }
    if (year % 100 == 0) {
        return 0;
    }
    if (year % 4 == 0) {
        return 1;
    }
    return 0;
}

// Function to determine the number of days in a given month
int getDaysInMonth(int month, int year) {
    int daysInMonth;
    switch (month) {
        case 2:
            daysInMonth = isLeapYear(year) ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
    }
    return daysInMonth;
}

// Function to validate the input date
int isValidDate(int day, int month, int year) {
    if (year < 1 || year > 9999) {
        return 0;
    }
    if (month < 1 || month > 12) {
        return 0;
    }
    int daysInMonth = getDaysInMonth(month, year);
    if (day < 1 || day > daysInMonth) {
        return 0;
    }
    return 1;
}

// Function to calculate the next date
void getNextDate(int day, int month, int year, int* nextDay, int* nextMonth, int* nextYear) {
    // If the input date is not valid, set the output date to 0/0/0
    if (!isValidDate(day, month, year)) {
        *nextDay = 0;
        *nextMonth = 0;
        *nextYear = 0;
        return;
    }
    // If the input date is the last day of the year, set the output date to 1/1/next year
    if (day == 31 && month == 12) {
        *nextDay = 1;
        *nextMonth = 1;
        *nextYear = year + 1;
        return;
    }
    int daysInMonth = getDaysInMonth(month, year);
    // If the input date is the last day of the month, set the output date to 1/next month/this year
    if (day == daysInMonth) {
        *nextDay = 1;
        *nextMonth = month + 1;
        *nextYear = year;
        return;
    }
    // Otherwise, set the output date to next day/this month/this year
    *nextDay = day + 1;
    *nextMonth = month;
    *nextYear = year;
}

// Main function for testing
int main() {
    int day, month, year;
    printf("Enter a date (in the format DD/MM/YYYY): ");
    scanf("%d/%d/%d", &day, &month, &year);
    int nextDay, nextMonth, nextYear;
    getNextDate(day, month, year, &nextDay, &nextMonth, &nextYear);
    printf("The next date is: %d/%d/%d\n", nextDay, nextMonth, nextYear);
    return 0;
}
