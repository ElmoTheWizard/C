#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;
    do
    {
        printf("Imput length: ");
        scanf("%d %d %d", &angle1, &angle2, &angle3);
    }
    while (angle1 < 0 && angle2 < 0 && angle3 < 0);
    
    if (angle1 == angle2 && angle3 == angle2)
    {
        printf("This is an equalateral triangle");
    }
    else if (angle1 == angle2 || angle1 == angle3 || angle3 == angle2)
    {
        printf("This is an isosceles triangle");
    }
    else 
    {
        printf("This is a scalene triangle");
    }
    printf("\n\n");
}