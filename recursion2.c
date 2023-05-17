#include<stdio.h>

int fact(int n)
{
	if(n==0)
		return 1; // base case
	else
		return n*fact(n-1);  // general case
}

void main()
{
	int n,result;
	printf("Enter a number:");
	scanf("%d",&n);
	result = fact(n);
	printf("\nFactorial is %d",result);
}
