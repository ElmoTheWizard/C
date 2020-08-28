#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>

int calculations(int converter);

int main(void)
{
    // Ask User for Change
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);

    // Convert Dollars to Cents
    float converter = 0;
    if (change > 0)
    {
        converter = round(converter + change * 100);
    }
    // Calculating Coins
    int totalcoins = calculations((int) converter);

    // Printing Answer
    printf("%d\n", totalcoins);
}



int calculations(int total)
{
    
    int i = 0, j = 0, k = 0;
    int results = 0;
    
    int coins[] = {25, 10, 5, 1};
    int quarterloop = 0, dimeloop = 0;
    int nickleloop = 0, pennyloop = 0;

    do
    {
        // Calculate Quarters
        for (i = 0; i < total; j++)
        {
            if ((total / coins[i]) > 0)
            {
                total -= coins[i];
                quarterloop++;
            }
            else
            {
                break;
            }
        }
        // Calculate Dimes
        for (i = 1; i < total; j++)
        {
            if ((total / coins[i]) > 0)
            {
                total -= coins[i];
                dimeloop++;
            }
            else
            {
                break;
            }
        }
        // Calculate Nickles
        for (i = 2; i < total; j++)
        {
            if ((total / coins[i]) > 0)
            {
                total -= coins[i];
                nickleloop++;
            }
            else
            {
                break;
            }
        }
        // Calculate Pennies
        for (i = 3; k < total; j++)
        {
            if ((total - coins[i]) >= 0)
            {
                total -= coins[i];
                pennyloop++;
            }
            else
            {
                break;
            }
        }
    }
    while (total > 0);
    results += quarterloop + nickleloop + dimeloop + pennyloop;
    return results;
}