#include <stdio.h>
#include <cs50.h>

int sizeOfArray;

int enterElementsInArray(int a[])
{
    int elementsOfArray = a[0];

    for (int i = 0; sizeOfArray > i; i++)
    {
        if (elementsOfArray < a[i])
        {
            elementsOfArray = a[i];
        }
    }
    return elementsOfArray;
}

int main()
{
   sizeOfArray = get_int("Imput the number of elements to be storeed in the array: ");
   int n[100];
   
   printf("Imput %d elements of the array:\n", sizeOfArray);

   for (int i = 0; i < sizeOfArray; i++)
   {
        printf("\nelement - %d: ", i);
        scanf("%d", &n[i]);
   }
   
   int elements = enterElementsInArray(n);
   printf("The largest element in the array is: %d\n", elements);
}