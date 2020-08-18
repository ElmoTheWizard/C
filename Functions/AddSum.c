#include <stdio.h>

int sumOfNumbers(int a, int b);
int main()
{
    int number1 = 0, number2 = 0;
    int total = sumOfNumbers(number1, number2);
    printf("%d\n", total);
}

int sumOfNumbers(int a, int b)
{
    int sum = a + b;
    return sum;
}