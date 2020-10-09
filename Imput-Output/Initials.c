#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void validateFirstAndLastName(char firstName[], char lastName[]);

int main()
{
    char firstName[20];
    char lastName[20];
    
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);
    
    validateFirstAndLastName(firstName, lastName);
    
    printf("Initials: %c.%c\n", toupper(firstName[0]), toupper(lastName[0]));
}

void validateFirstAndLastName(char firstName[], char lastName[])
{
    if (!isalpha(firstName[0]))
    {
        printf("Your first name begins with a number. Please let it start with a letter.\n");
        exit(0);
    }
    
    if (!isalpha(lastName[0]))
    {
        printf("Your last name begins witfh a number. Please let it start with a letter\n");
        exit(0);
    }
}

