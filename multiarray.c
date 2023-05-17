#include<stdio.h>

void main()
{
	char name[3][10];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		printf("\nEnter name:");
		scanf("%s",name[i]);
	}
	
	for(i=0;i<3;i++)
	{
		printf("\n%s",name[i]);
	}
}
