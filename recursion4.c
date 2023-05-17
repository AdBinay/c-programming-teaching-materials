#include<stdio.h>

int sum(int n)
{
	if(n==0)
		return 0;
	
	return ((n%10) + sum(n/10));
}

int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	printf("\nThe sum of digits of number is %d",sum(n));
	return 0;
}
