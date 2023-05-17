#include<stdio.h>
void main()
{
	int i=0;
	while(i!=10)
	{
		printf("Value of i : %d\n",i);
		i++;
		if(i==5)
		{
			goto myPlace;
		}
	}
	printf("Hello");
	myPlace:
		printf("Program Has Done goto statement");
}
