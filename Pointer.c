#include<stdio.h>

void main()
{
	int a = 10, *p;
	p = &a;
	
	printf("\nAddress of a is %u",&a);
	printf("\nAddress of a is %u",p);
	printf("\nValue of a is %d",a);
	printf("\nValue of a is %d",*p);
	printf("\nValue of p is %u",&p);
}
