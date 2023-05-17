#include <stdio.h>
#include <math.h> 

int main()
{
    float side, area;

    printf("Enter side of an equilateral triangle: ");
    scanf("%f", &side);

    area = (sqrt(3) / 4) * pow(side,2);

    printf("Area of equilateral triangle is %.2f sq. units", area);

    return 0;
}
