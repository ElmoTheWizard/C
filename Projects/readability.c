#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//This program computes the approximate grade level needed to comprehend the text that you enter
//when you run it
//Eg: Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
//Grade 3

int main(void)
{
    // User Imput and Copy Strings
    int i = 0;
    char text2[2000];
    string text = get_string("\nText: ");
    strcpy(text2, text);

    // Finds the Amount of Letters
    int j = 0, totalletters = 0;
    for (i = 0; text[i]; i++)
    {
        while (!(text[i] >= 'a' && text[i] <= 'z') && !(text[i] >= 'A' && text[i] <= 'Z') && !(text[i] == '\0'))
        {
            for (j = i; text[j] != '\0'; ++j)
            {

                text[j] = text[j + 1];
            }
            text[j] = '\0';

        }
        totalletters++; 
    }
    totalletters -= 1;
    // Finds the Amount of Words
    int totalwords = 1;

    for (i = 0; text2[i]; i++)
    {
        if (text2[i] == 32)
        {
            totalwords++;
        }
    }
    // Finds the Amount of Sentences
    int totalsentences = 0;
    for (i = 0; text2[i]; i++)
    {
        if (text2[i] == 46 || text2[i] == 33 || text2[i] == 63)
	    {
            totalsentences++;
	    }
    } 
    
    // Prints Grade Level
    float L = (float) totalletters / (float) totalwords * (float) 100;
    float S = (float)totalsentences / (float) totalwords * (float) 100; 
    float index = 0.0588 * L - 0.296 * S - 15.8;
    
    for (i = 0; i < 1; i++)
    {   
        if (index < 1)
        {
            printf("Before Grade 1");
            printf("\n"); 
        }
        else if (index > 16)
        {
            printf("Grade 16+");
            printf("\n"); 
        }
        else
        {
            printf("Grade %.0lf", round(index));  
            printf("\n"); 
        }
        
    }
 
}
