#include<stdio.h>

void main()
{
	int i,j,n;
	
	printf("Enter nth:");
	scanf("%d",&n);
	int composite[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&composite[i]);
	}
	for(i=0;i<n;i++)
	{
		int num = composite[i];
		for(j=2;j<n-1;j++)
		{
			if(num%j==0)
			{
				printf("%d\t",num);
			}
		}
	}
}
