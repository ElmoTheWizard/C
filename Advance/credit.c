#include <cs50.h>
#include <stdio.h>
#include <math.h>

//This program only works with MasterCard, Visa, Amex, and American Express

void checkSum(int creditCardNumber)
{
    long creditCardDigit = 0;
    long creditCardSum = 0;

    for (int i = 0; creditCardNumber != 0; i++, creditCardNumber /=10)
    {
        if (i % 2 == 0)
        {
            creditCardSum += creditCardNumber % 10;
        }
        else
        {
            creditCardDigit = 2 * (creditCardNumber % 10);
            creditCardSum += creditCardDigit / 10 + creditCardDigit % 10;
        }
    }
}
int validateCreditCardLength(long creditCardNumberForPrint)
{

    long creditCardLength = 0;
    long n = creditCardNumberForPrint;
    for ( ; n != 0; n /= 10)
    {
        creditCardLength++;
    }
    return creditCardLength;
}

void printBrand(long creditCardNumberForPrint)
{
    long MasterCard = pow(10, 14);
    long Amex = pow(10, 13);

     if ((creditCardNumberForPrint / MasterCard ) == 51 ||(creditCardNumberForPrint / MasterCard ) == 52 ||
        (creditCardNumberForPrint / MasterCard ) == 53 ||(creditCardNumberForPrint / MasterCard ) == 54 ||
        (creditCardNumberForPrint / MasterCard ) == 55)
    {
        printf("MASTERCARD\n");
    }
    else if((creditCardNumberForPrint >= 4e12 && creditCardNumberForPrint < 5e12) ||
            (creditCardNumberForPrint >= 4e15 && creditCardNumberForPrint < 5e15))
    {
        printf("VISA\n");
    }
    else if ((creditCardNumberForPrint / Amex) == 34 || (creditCardNumberForPrint / Amex) == 37)
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

int main(void)
{
    long creditCardNumber = get_long("Number: ");
    long creditCardNumberForPrint = creditCardNumber;
    long creditCardLength = validateCreditCardLength(creditCardNumberForPrint);
    checkSum(creditCardNumber);

    // I'm forced to put 3 if statements seperately or else the program will break
    if (creditCardLength == (long) 16 ) { printBrand(creditCardNumberForPrint); return 0;}
    else if (creditCardLength == (long) 13) {printBrand(creditCardNumberForPrint); return 0;}
    else if (creditCardLength == (long) 15) {printBrand(creditCardNumberForPrint); return 0;}
    else
    {
        printf("INVALID\n");
        return 0;
    }
}