// wap to calculate the sum of n numbers entered by the user
// using malloc and free
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i, *ptr, sum=0;
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	ptr = (int*) malloc(n*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Error! Memory can not be allocated");
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
