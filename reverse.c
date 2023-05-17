#include<stdio.h>

void main()
{
	int n,i,rem,reverse,temp;
	printf("Enter number:");
	scanf("%d",&n);
	temp = n;
	while(n!=0)
	{
		rem = n%10;
		reverse = reverse * 10 + rem;
		n = n/10;
	}
	printf("Reverse of %d is %d",temp,reverse);
}
