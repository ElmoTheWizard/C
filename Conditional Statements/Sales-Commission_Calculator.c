#include <stdio.h>

int main(void)
{
    const int weeklySalary = 200;
    const double percentage = 0.09;
    double sales = 0;
    double total = 0;
    
    printf("\nEnter sales in dollars: ");
    scanf("%lf", &sales);
    
    while(sales != -1)
    {
        total = (sales * percentage) + weeklySalary;
        
        printf("Salary is: %.2f\n\n", total);
        
        printf("\nEnter sales in dollars: ");
        scanf("%lf", &sales);
    }
    
}