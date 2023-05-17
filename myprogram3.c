// program to swap two variables using third variable
#include<stdio.h>

void main()
{
	int a=3,b=2,c;
	printf("value of a and b before swapping: %d and %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nvalue of a and b after swapping: %d and %d",a,b);
	getch();	
}
