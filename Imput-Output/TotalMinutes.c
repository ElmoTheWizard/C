#include <stdio.h> 
#include <cs50.h>

int imputHours()
{
    int Hours;
    do
    {
        Hours = get_int("Imput hours: ");
    }
    while(Hours < 0);
    return Hours;
    
}

int imputMinutes()
{
    int minutes;
    do
    {
        minutes = get_int("Imput minutes: ");
    }
    while(minutes < 0);
    return minutes;
}

int conversion(int hours, int minutes)
{
    int total = (hours *60) + minutes;
    return total;
}

int main()
{
    int hours = imputHours();
    int minutes = imputMinutes();
    int total = conversion(hours, minutes);
    printf("Total: %d minutes\n\n", total);
}