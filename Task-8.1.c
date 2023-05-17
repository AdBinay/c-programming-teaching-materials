#include<stdio.h>
#include<math.h>

float ci(float p, float r, float t)
{
	float c;
	c = p*pow((1+r/100),t);
	return c;
}

void main()
{
	float p,t,r;
	printf("Enter principle,rate,time:");
	scanf("%f%f%f",&p,&t,&r);
	printf("\nCompound Interest is %.2f",ci(p,t,r));
}
