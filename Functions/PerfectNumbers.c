#include <stdio.h>
#include <cs50.h>

int checkPerfectNumber(int a)
{
    int i, sum;
    sum = 0;
    
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    if (sum == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void perfectNumbers(int startSearchLimit, int endSearchLimit)
{
    while (startSearchLimit <= endSearchLimit)
    {
        if (checkPerfectNumber(startSearchLimit))
        {
            printf("%d ", startSearchLimit);
        }
        startSearchLimit++;
    }
}

int main ()
{
    int startSearchLimit = get_int("Imput lowest search limit of perfect numbers: ");
    int endSearchLimit = get_int("Imput lowest search limit of perfect numbers: ");
    
    printf("The perfect Numbers between 1 to 100 are: \n");
    perfectNumbers(startSearchLimit, endSearchLimit);
    printf("\n");
}