#include <stdio.h>
#include <cs50.h>

//  NOTE: DECIMAL IN MEANS A BASE 10 NUMEBR IN THIS CONTEXT

void decimalToBinary(int a)
{
    int binaryNumber = a;
    
    for (int i = 0; binaryNumber != 0; i++, binaryNumber /=2)
    {
        if (binaryNumber % 2 == 0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
}

int main()
{
    int decimalNumber = get_int("Imput any decimal number: ");
    
    decimalToBinary(decimalNumber);
    printf("\n");
}