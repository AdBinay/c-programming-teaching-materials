// wap to calculate the sum of n numbers entered by the user
// using calloc and free
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i,*ptr,sum=0;
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	ptr = (int*) calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Error! memory not allocated");
		exit(0);
	}
	
	printf("Enter elements:");
	for(i=0;i<n;++i)
	{
		scanf("%d",ptr+i);
		sum += *(ptr+i);
	}
	
	printf("Sum = %d",sum);
	free(ptr);
}
