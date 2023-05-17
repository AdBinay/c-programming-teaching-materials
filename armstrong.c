#include<stdio.h>
void main()
{
	int n,temp,r,a=0;
	
	printf("Enter number:");
	scanf("%d",&n);
	temp = n;
	while(n!=0)
	{
		r = n%10;
		a = a + r*r*r;
		n=n/10;
	}
	if(temp==a)
	{
		printf("%d is armstrong number",temp);
	}
	else
	{
		printf("%d is not armstrong number",temp);
	}
}
