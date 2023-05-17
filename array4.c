#include<stdio.h>

void main()
{
	int i,num[5],max;
	
	for(i=0;i<5;i++)
	{
		printf("Enter number:");
		scanf("%d",&num[i]);
	}
	max=num[0];
	for(i=0;i<5;i++)
	{
		if(max>num[i])
		{
			max= num[i];
		}
	}
	printf("Largest number is %d",max);
}
