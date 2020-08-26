#include <stdio.h>
#include <cs50.h>
#include <math.h>

int getImput()
{
    int minutes;
    do
    {
         minutes = get_int("Imput Minutes: ");
    }
    while (minutes < 0);
    return minutes;
}

int calculateHours(int minutes)
{
    int hours = minutes /60;
    return hours;
}

int calculateMinutes(int minutes)
{
    minutes %= 60;
    return minutes;
}

int main()
{
    int minutes = getImput();
    int hours = calculateHours(minutes);
    minutes = calculateMinutes(minutes);
    
    printf("%d Hours, %d Minutes\n\n", hours, minutes);
}