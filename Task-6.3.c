#include<stdio.h>

void main()
{
	int i,j,m,n;
	
	printf("Enter the range value:");
	scanf("%d%d",&m,&n);
	
	for(i=m;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0){
				break;
			}
		}
		if(i==j){
			printf("%d\n",i);
		}
	}
}
