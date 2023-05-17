#include<stdio.h>

void fact(int a)
{
	int j,f=1;
	for(j=1;j<=a;j++)
	{
		f=f*j;
	}
	printf("\nFactorial is %d\n",f);
}

void main()
{
	int i,a;
	for(i=0;i<=10;i++)
	{
		printf("\nEnter no.:");
		scanf("%d",&a);
		fact(a);
	}
}
