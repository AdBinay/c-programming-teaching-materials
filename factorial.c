#include<stdio.h>

void main()
{
	int n,i,fact=1;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact = fact * i;
	}
	printf("Factorial of %d is %d",n,fact);
}
