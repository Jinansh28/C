#include <stdio.h>
int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main() {
    int year;
    int total_days = 0;
    printf("Enter a year: ");
    scanf("%d", &year);
    for (int y = 1900; y < year; y++) {
        total_days += is_leap_year(y) ? 366 : 365;
    }
    int day_of_week = (total_days % 7); // 0 = Monday
    switch (day_of_week) {
        case 0: printf("1st January %d is a Monday.\n", year); break;
        case 1: printf("1st January %d is a Tuesday.\n", year); break;
        case 2: printf("1st January %d is a Wednesday.\n", year); break;
        case 3: printf("1st January %d is a Thursday.\n", year); break;
        case 4: printf("1st January %d is a Friday.\n", year); break;
        case 5: printf("1st January %d is a Saturday.\n", year); break;
        case 6: printf("1st January %d is a Sunday.\n", year); break;
    }
    return 0;
}