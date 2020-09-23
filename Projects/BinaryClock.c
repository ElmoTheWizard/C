#include <cs50.h>
#include <stdio.h>
#include <math.h>

// Array of binary rows
int row1[3] = {0, 0, 0};
int row2[5] = {0, 0, 0, 0, 0};
int row3[6] = {0, 0, 0, 0, 0, 0};
int row4[6] = {0, 0, 0, 0, 0, 0};

// Function prototypes
void calculateHours(int hours[]);
void calculateMinutes(int minutes[]);
void calculateSeconds(int seconds[]);



// Gets user imput
int main()
{
    int hours[1];
    for (int i = 0; i == 0; i++)
    {
        do
        {
            hours[i] = get_int("Imput hours: ");
        }
        while( hours[i] > 24);
    }

    int minutes[1];
    for (int i = 0; i < 1; i++)
    {
        printf("Imput minutes:");
        do
        {
            scanf("%d", &minutes[i]);
        }
        while(minutes[i] > 60);
    }

    int seconds[1];
    for (int i = 0; i < 1; i++)
    {
        printf("Imput seconds:");
        do
        {
            scanf("%d", &seconds[i]);
        }
        while(seconds[i] > 60);
    }
    
    // Calling Functions
    calculateHours(&hours[0]);
    calculateMinutes(&minutes[0]);
    calculateSeconds(&seconds[0]);
    
    // Prints Binary Clock
    for(int j = 0; j < 1; j++)
    {
        printf("\n\n");
        for (int i = 0; i < 3; i++)
        {
            printf(" ");
            printf("%d", row1[i]);
        }
        printf("\n");
        printf(" ");
        
        for (int k = 0; k < 5; k++)
        {
            printf("%d", row2[k]);
        }
        printf("\n");
        
        for (int p = 0; p < 6; p++)
        {
            printf("%d", row3[p]);
        }
        printf("\n");
        
        for (int q = 0; q < 6; q++)
        {
            printf("%d", row4[q]);
        }
        printf("\n");
    }
    
}

void calculateHours(int hours[0])
{
    for (int i = 0; i < 2; i++)
    {
        int powersOf10[2] = {1, 10};
        char nthDigit = ((hours[0] / powersOf10[i]) % 10);
        int xthDigit = (int)nthDigit;
        
        // Changes the 0 to 1 in rows[] if the number is 8, 6, 4, 2, and 1
        if (8 == xthDigit)
        {
            row1[0] = 1;
        }

        if (6 == xthDigit)
        {
            row2[0] = 1;
            row3[1 - i] = 1;
        }

        if (4 == xthDigit)
        {
            row2[0] = 1;
        }

        if (2 == xthDigit)
        {
            row3[1 - i] = 1;
        }

        if (1 == xthDigit)
        {
            row4[1 - i] = 1;
        }

        // Changes the 0 to 1 in rows[] if the number is 9, 7, 5, and 3
        if(1 != xthDigit)
        {

            if (1 + 8 == xthDigit)
            {
                row1[0] = 1;
                row4[1 - i] = 1;
            }

            if (1 + 2 + 4 == xthDigit)
            {
                row2[0] = 1;
                row3[1 - i] = 1;
                row4[1 - i] = 1;
            }

            if (1 + 4 == xthDigit)
            {
                row2[0] = 1;
                row4[1 - i] = 1;
            }

            if (1 + 2 == xthDigit)
            {
                row3[1 - i] = 1;
                row4[1 - i] = 1;
            }
        }
    }
}


void calculateMinutes(int minutes[0])
{
    for (int i = 0; i < 2; i++)
    {
        int powersOf10[2] = {1, 10};
        char nthDigit = ((minutes[0] / powersOf10[i]) % 10);
        int xthDigit = (int)nthDigit;
        
        // Changes the 0 to 1 in rows[] if the number is 8, 6, 4, 2, and 1
        if (8 == xthDigit)
        {
            row1[1] = 1;
        }

        if (6 == xthDigit)
        {
            row2[2 - i] = 1;
            row3[3 - i] = 1;
        }

        if (4 == xthDigit)
        {
            row2[2 - i] = 1;
        }

        if (2 == xthDigit)
        {
            row3[3 - i] = 1;
        }

        if (1 == xthDigit)
        {
            row4[3 - i] = 1;
        }

        // Changes the 0 to 1 in rows[] if the number is 9, 7, 5, and 3
        if(1 != xthDigit)
        {

            if (1 + 8 == xthDigit)
            {
                row1[1] = 1;
                row4[3 - i] = 1;
            }

            if (1 + 2 + 4 == xthDigit)
            {
                row2[2 - i] = 1;
                row3[3 - i] = 1;
                row4[3 - i] = 1;
            }

            if (1 + 4 == xthDigit)
            {
                row2[2 - i] = 1;
                row4[3 - i] = 1;
            }

            if (1 + 2 == xthDigit)
            {
                row3[3 - i] = 1;
                row4[3 - i] = 1;
            }
        }
    }
}

void calculateSeconds(int seconds[0])
{
    for (int i = 0; i < 2; i++)
    {
        int powersOf10[2] = {1, 10};
        char nthDigit = ((seconds[0] / powersOf10[i]) % 10);
        int xthDigit = (int)nthDigit;
        
        // Changes the 0 to 1 in rows[] if the number is 8, 6, 4, 2, and 1
        if (8 == xthDigit)
        {
            row1[2] = 1;
        }

        if (6 == xthDigit)
        {
            row2[4 - i] = 1;
            row3[5 - i] = 1;
        }

        if (4 == xthDigit)
        {
            row2[4 - i] = 1;
        }

        if (2 == xthDigit)
        {
            row3[5 - i] = 1;
        }

        if (1 == xthDigit)
        {
            row4[5 - i] = 1;
        }

        // Changes the 0 to 1 in rows[] if the number is 9, 7, 5, and 3
        if(1 != xthDigit)
        {

            if (1 + 8 == xthDigit)
            {
                row1[2 - i] = 1;
                row4[5 - i] = 1;
            }

            if (1 + 2 + 4 == xthDigit)
            {
                row2[4 - i] = 1;
                row3[5 - i] = 1;
                row4[5 - i] = 1;
            }

            if (1 + 4 == xthDigit)
            {
                row2[4 - i] = 1;
                row4[5 - i] = 1;
            }

            if (1 + 2 == xthDigit)
            {
                row3[5 - i] = 1;
                row4[5 - i] = 1;
            }
        }
    }
}