#include<stdio.h>

void main()
{
	int i,j,a[3][3];
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("Enter [%d][%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("Printing Transpose of Matrix A:\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	// printing transpose of matrix a
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
