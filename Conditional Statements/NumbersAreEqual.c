#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number1 = get_int("Imput an integer: ");
    int number2 = get_int("Imput another integer: ");
    
    if (number1 == number2)
    {
        printf("\n%d and %d are equal\n\n", number1, number2);
    }
    else
    {
        printf("\n%d and %d are not equal\n\n", number1, number2);
    }
}