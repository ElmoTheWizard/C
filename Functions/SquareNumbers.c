#include <stdio.h>
#include <math.h>
#include <cs50.h>

int squareNumber(int a);
int main()
{
    int number = get_int("Imput any number for square: ");
    int total = squareNumber(number);
    printf("%d\n", total);
}

int squareNumber(int a)
{
    int product =  pow(a, 2);
    return product;
}