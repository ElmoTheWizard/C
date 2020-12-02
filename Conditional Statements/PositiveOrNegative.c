#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int number = get_int("Imput a number: ");
    
    if (number < 0)
    {
        printf("%d is a negative number\n\n", number);
    }
    else
    {
        printf("%d is a positve number\n\n", number);
    }
}
printArray