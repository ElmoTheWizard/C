#include <stdio.h>
#include <cs50.h>

void evenOrOdd(int a)
{
    if ((a % 2) == 0)
    {
        printf("The entered number is even\n");
    }
    else
    {
        printf("The entered number is odd\n");
    }
}

int main()
{
    int number = get_int("Imput any number: ");
    evenOrOdd(number);
}
