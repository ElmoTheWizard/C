#include <stdio.h>

int main(void)
{
    int results = 0;
    int counter = 0;
    int passed = 0;
    int failed = 0;
    
    
    for (; counter < 10; )
    {
        printf("Enter results: ");
        scanf("%d", &results);
        
        if (results == 1)
        {
            passed++;
            counter++;
        }
        
        if (results == 2)
        {
            failed++;
            counter++;
        }   
    }
    
    printf("\nStudents passed: %d\n", passed);
    printf("Students failed: %d\n", failed);
    
    if (passed > 8)
    {
        puts("Bonus to instructor!");
        }
}