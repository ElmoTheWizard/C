#include <stdio.h>
#include <cs50.h>

void findSum(double number1, double number2)
{
    double sum = number1 + number2;
    printf("The sum of the given numbers:%.2lf\n", sum);
}

void findDifference(double number1, double number2)
{
    double difference = number1 - number2;
    printf("The difference of the given numbers: %.2lf\n", difference);
}

void findProduct(double number1, double number2)
{
    double product = number1 * number2;
    printf("The product of the given numbers: %.2lf\n", product);
}

void findQuotient(double number1, double number2)
{
    double quotient = number1 / number2;
    printf("The quotient of the given numbers: %.2lf\n", quotient);
}

int main()
{
    double number1, number2; 
    char line_text[50];
    printf("Imput two numbers seperatelf by a comma: ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%lf, %lf", &number1, &number2);
    
    findSum(number1, number2);
    findDifference(number1, number2);
    findProduct(number1, number2);
    findQuotient(number1, number2);
    printf("\n\n");
    
}