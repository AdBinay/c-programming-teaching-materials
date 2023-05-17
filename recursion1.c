#include<stdio.h>

int sum(int num)
{
	if(num!=0)
	{
		return num+sum(num-1); // general case
	}
	else
	{
		return num; // base case
	}
}

void main()
{
	int n;
	printf("Enter a nth term:");
	scanf("%d",&n);
	printf("\nResult = %d",sum(n));
}
