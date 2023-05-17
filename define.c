#include<stdio.h>
#define PI 3.1415

void main()
{
	float r,area;
	
	printf("Enter radius of circle:");
	scanf("%f",&r);
	area = PI*r*r;
	printf("\nArea of Circle having radius %.2f is %.2f cm square.",r,area);
}
