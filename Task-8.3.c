#include<stdio.h>
void p(int base, int exponent)
{
	int res=1;
	for(exponent; exponent>0; exponent--)
	{
		res = res * base;
	}
	printf("Result : %d",res);
}

void main()
{
int b,e;
int result;
printf("Enter a base number: ");
scanf("%d", &b);
printf("Enter an exponent: ");
scanf("%d", &e);
p(b,e);
}
