#include <stdio.h>

int main(void)
{
    double BMI, pounds, inches;

    puts("\nBMI Values");
    puts("Underweight: less than 18.5");
    puts("Normal: between 18.5 and 24.9");
    puts("Overweight: between 25 and 29.9");
    puts("Obese: 30 or greater");
    puts("-----------------------------------");
    
    puts("Please enter the following information:");
    printf("Pounds: ");
    scanf("%lf", &pounds);
    printf("Inches: ");
    scanf("%lf", &inches);
    
    BMI = (pounds * 703) / (inches * inches);
    printf("BMI = %.1lf\n\n", BMI);
    
}