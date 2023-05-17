#include<stdio.h>
void main()
{
       int n;
       printf("Enter Numbers :");
       scanf("%d",&n);
       if(n<100)
       {
       	if(n%3 == 0)
       	{
       		printf("%d is Less Than 100 and Odd number",n);	
		}else
		{
			printf("%d is Less Than 100 and Even Number",n);
		}
	   }else
	   {
	   	printf("%d is More than 100",n);
	   }
}
