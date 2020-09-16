#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>

// To use this program first type ./caesar <key> (the number of times you want your letters to shift)
//and it wil prompt you to enter plainText. It will print the Ciphered Text after.
//Eg: ./caesar 1 
//PlainText: hello
//CipheredText: ifmmp

int validateArgument(int argc)
{   
    if (argc == 2)
    {
        return argc;   
    }
    else
    {
        printf("Usage: ./caesar key\n\n");
        exit(0);
    }
}

string onlyNumbersInArgument(char string[])
{
    for (int i = 0; string[i]; i++)
    {
        if (isalpha(string[i]) != 0)
        {
            printf("Usage: ./caesar key\n\n");
            exit(0);
        }
       
    }
    return string;
}
string promptForString()
{
    string string = get_string("PlainText: ");
    return string;
}

void caesarCipher(string plainText, int key)
{
    for (int i = 0; plainText[i]; i++)
    {
        
        char c = plainText[i];
        if (isalpha(c))
        {
            char m = 'A';
            if (islower(c))
            {
                m = 'a';
                printf("%c", (c - m + key) % 26 + m);
            }
            else
            {
                printf("%c", (c - m + key) % 26 + m);
            }
        }
    }
}

int main(int argc, string argv[])
{
    validateArgument(argc);
    onlyNumbersInArgument(argv[1]); 
    string plainText = promptForString();
    
    int key = atoi(argv[1]);
    printf("ciphertext: ");
    
    caesarCipher(plainText, key);
    printf("\n");
}
