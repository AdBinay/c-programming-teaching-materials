// program to find circumference of circle
#include<stdio.h>

void main()
{
	float r, c;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	c = 2 * 3.14 * r;
	printf("circumference of circle having radius %.2f is %.2f",r,c);
	
	getch();
}
