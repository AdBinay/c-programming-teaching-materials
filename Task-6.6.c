#include<stdio.h>

void main()
{
	int i,j,m,n;
	
	printf("Enter the range value:");
	scanf("%d%d",&m,&n);
	
	for(i=m;i<=n;i++)
	{
		if(i%2==0){
			printf("Even : %d\n",i);
		}else
		{
			printf("Odd : %d\n",i);
		}
	}
}
