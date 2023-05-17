#include<stdio.h>

void main()
{
	int i,age[10],c=0;
	
	for(i=0;i<10;i++)
	{
		printf("Enter age:");
		scanf("%d",&age[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(age[i]>=16 && age[i]<=19)
		{
			c = c+1;
		}
	}
	
	printf("Total Number of People between age 16 to 19 is %d",c);
}
