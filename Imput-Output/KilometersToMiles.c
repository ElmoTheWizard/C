#include <stdio.h>
#include <cs50.h>

float getImput()
{
    float kilometers;
    do
    {
        kilometers = get_float("Imput kilometers per hour: ");
    }
    while(kilometers < 0);
    return kilometers;
}

float conversion(float kilometers)
{
    float miles = 1.6;
    kilometers /= miles;
    return kilometers;
}

int main ()
{
    float kilometers = getImput();
    float miles = conversion(kilometers);
    printf("%0.2lf miles per hour\n\n", miles);
}