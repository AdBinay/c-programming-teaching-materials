// Program to calculate area of right angle triangle
#include<stdio.h>
void main()
{
	float b,h,a;
	
	printf("Enter Height, Breadth:(in cm)");
	scanf("%f%f",&h,&b);
	a = (1/2) * b * h;
	printf("\nArea of Right Angled Triangle having Height %.2f cm and Breadth %.2f cm is %.2f cm square.");
	
	getch();
}
