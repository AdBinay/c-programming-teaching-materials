// program to swap two variables without using third variable
#include<stdio.h>

void main()
{
	int a,b;
	
	printf("Enter value of a and b:");
	scanf("%d%d",&a,&b);
	printf("value of a and b before swapping: %d and %d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\nvalue of a and b after swapping: %d and %d",a,b);
		
	getch();
}
