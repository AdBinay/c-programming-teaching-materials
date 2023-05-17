#include<stdio.h>

void bubbleSort()
{
	int i,j,num[10],temp;
	
	for(i=0;i<10;i++)
	{
		printf("\nEnter [%dth] number:",i);
		scanf("%d",&num[i]);
	}
	
	// Bubble Sort 
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(num[i]<num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	// Printing in Ascending Order
	for(i=0;i<10;i++)
	{
		printf("%d\n",num[i]);
	}
}

void main()
{
	bubbleSort();
}
