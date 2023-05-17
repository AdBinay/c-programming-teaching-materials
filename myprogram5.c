// program to convert faherhheit to degree celsius

#include<stdio.h>

void main()
{
	float f,c;
	
	printf("Enter temperature in fahernheit:");
	scanf("%f",&f);
	
	c = (f-32) * 5/9;
	printf("\nTemperature in celsius: %.2f",c);
	getch();
}
