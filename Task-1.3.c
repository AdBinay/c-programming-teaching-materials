// program to convert celsius to faherhheit

#include<stdio.h>

void main()
{
	float f,c;
	
	printf("Enter temperature in celsius:");
	scanf("%f",&c);
	
	f = 1.8 * c + 32;
	printf("\nCelsius: %.2f \t Fahrenheit: %.2f",c,f);
	getch();
}
