#include <stdio.h>
#include <cs50.h>


void swapNumbers(int *a,  int *b)
{
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int number1 = get_int ("Imput 1st number: ");
    int number2 = get_int ("Imput 2nd number: ");
    
    printf("Before swapping: n1 = %d, n2 = %d\n", number1, number2);
    swapNumbers(&number1, &number2);
    printf("After swapping: n1 = %d, n2 = %d\n", number1, number2);
}

