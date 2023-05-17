#include<stdio.h>

void main()
{
	int i,j,k,a[3][3],b[3][3],c[3][3],s;
	
	printf("reading matrix a\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("Enter [%d] [%d] element:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("reading matrix b\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("Enter [%d] [%d] element:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	// matrix multiplication
	for(i=1;i<=3;i++)
	{
		for(j=1;j<3;j++)
		{
			s=0;
			for(k=1;k<=3;k++)
			{
				s = s + a[i][k] * b[k][j];
			}
			c[i][j] = s;			
		}
	}
	
	printf("\nMultiplication result\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
