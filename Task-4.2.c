#include<stdio.h>
void main()
{
	int sum=0,i,n,rem,temp;
	
	printf("Enter number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem = n%10;
		sum = sum+rem;
		n = n/10;
	}
	printf("Sum of digits of number %d is %d",temp,sum);
}
