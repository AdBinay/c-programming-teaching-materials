#include<stdio.h>

void main()
{
	int i,j,a[2][2],b[2][2],c[2][2];
	
	// Reading Elements of matrix A
	printf("Reading Elements of matrix A\n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("\nEnter [%d] [%d] Element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	// Reading Elements of matrix B
	printf("Reading Elements of matrix B\n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("\nEnter [%d] [%d] Element:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	// Adding Matrix A and B
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	// Printing the Result of Addition
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
