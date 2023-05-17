#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greater",a);
	}
	else if(b>c)
	{
		printf("%d is greater",b);
	}
	else
	{
		printf("%d is greater",c);
	}
}
