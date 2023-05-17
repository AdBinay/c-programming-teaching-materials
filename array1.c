#include<stdio.h>

void main()
{
	int num[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter number:");
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",num[i]);
	}
}	
