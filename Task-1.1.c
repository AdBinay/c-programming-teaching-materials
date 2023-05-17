// Program to calculate Simple Interest
#include<stdio.h>

void main()
{
	float principle,rate,si;
	int time;
	
	printf("Enter Principle, Rate and Time:");
	scanf("%f%f%d",&principle,&rate,&time);
	si = (principle*time*rate)/100;
	printf("\nSimple Interest of Rs %.2f for %d years at %.2f per annum is Rs %.2f",principle,time,rate,si);
	
	getch();
}
