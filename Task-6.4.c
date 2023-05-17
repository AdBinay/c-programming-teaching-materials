#include<stdio.h>

void main()
{
	int i,j,mark[20],temp;
	
	for(i=0;i<20;i++)
	{
		printf("\nEnter [%dth] mark:",i);
		scanf("%d",&mark[i]);
	}
	
	// Sorting Mark
	for(i=0;i<20;i++)
	{
		for(j=i+1;j<20;j++)
		{
			if(mark[i]<mark[j])
			{
				temp = mark[i];
				mark[i] = mark[j];
				mark[j] = temp;
			}
		}
	}
	
	// Printing 3rd Highest and 2nd Last Mark
	printf("\n3rd Highest Mark is %d",mark[2]);
	printf("\n2nd Last Mark is %d",mark[18]);
}
