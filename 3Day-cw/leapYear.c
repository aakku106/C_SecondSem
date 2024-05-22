// program that  determines if a given year is leap year (considering conditions like divisible by 4 but not by 100, divisible by 400)
#include <stdio.h>
void main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("The year %d is a leap year", year);
    }
    else
    {
        printf("The year %d is not a leap year", year);
    }
}