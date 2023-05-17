#include<stdio.h>
void main()
{
	int n,b=0,p=1,r;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
		r = n%2;
		b = b + r*p;
		p = p*10;
		n = n/2;
	}
	printf("Binary is %d",b);
}
