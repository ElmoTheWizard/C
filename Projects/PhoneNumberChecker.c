#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

// Function prototypes
int validatePhoneNumberLength(string phoneNumber);
int validatePhoneNumber(string phoneNumber);

int main()
{
    string phoneNumber = get_string("Phone Number: ");

    // Calling Functions
    validatePhoneNumberLength(phoneNumber);
    validatePhoneNumber(phoneNumber);

    // Print Results
    printf("The phone number is valid\n\n");
}

int validatePhoneNumberLength(string phoneNumber)
{   
    if (strlen(phoneNumber) != 14)
    {
        printf("\nPhone Number is incorrect. The phone number should contain 14 characters\n");
        printf("Here is an example: (912) 153-6423\n\n");
        exit(0);
    }
    return 0;
}

int validatePhoneNumber(string phoneNumber)
{
    // Checks for letters
    for (int i = 0; phoneNumber[i]; i++)
    {
        char c = phoneNumber[i];
        if (isalpha(c))
        {
            printf("Letters in Phone Number detected. Please add only numbers.\n\n");
            exit(0);
        }
        
    }
    
    // Checks for an open parenthesis
    char openparenthesis = phoneNumber[0];
    if (openparenthesis != 40)
    {
        printf("Open parenthesis is missing or misplaced. Please enter an open parenthesis\n\n");
        exit(0);
    }

    // Checks for a closed parenthasis
    char closedparenthesis = phoneNumber[4];
    if (closedparenthesis != 41)
    {
        printf("Closed parenthesis is missing or misplaced. Please enter a closed parenthasis\n\n");
        exit(0);
    }

    // Checks for a hyphen
    char hyphen = phoneNumber[9];
    if (hyphen != 45)
    {
        printf("A hyphen is missing or misplaced. Please enter a hyphen\n\n");
        exit(0);
    }
    return 0;
}
