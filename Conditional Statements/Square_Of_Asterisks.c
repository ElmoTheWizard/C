#include <stdio.h>

int main(void)
{
    int sizeOfSquare = 0;
    do
    {
        printf("Please enter the size of the square between 1 and 20: ");
        scanf("%d", &sizeOfSquare);

    }while(sizeOfSquare > 0 && sizeOfSquare > 20);
    
    for (int i = 0; i < sizeOfSquare; i++)
    {
        int newline = 0;
        for (int j = 0; j < sizeOfSquare; j++)
        {
            printf("*");
        }
        
        if (newline != sizeOfSquare)
        {
            puts("");
        }
        newline++;
    }
}