#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int year;
    
    do
    {
        year = get_int("Imput a year: ");
    }
    while (year < 0);
    
    if (year % 4 == 0)
    {
        printf("%d is a leap year\n\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is a leap year\n\n", year);
    }
    else if (year % 400 == 0)
    {
        printf("%d is a leap year\n\n", year);
    }
    else 
    {
        printf("%d is not a leap year\n\n", year);
    }
}