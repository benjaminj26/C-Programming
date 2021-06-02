// Program to find the area of a circle //

#include <stdio.h>
int main()
{
    float r, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = (22 * r * r) / 7;
    printf("Area of the circle = %f", area);
}