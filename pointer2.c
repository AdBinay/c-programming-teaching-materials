#include<stdio.h>

void main()
{
	int fno, sno, sum, *ptr, *qtr;
	
	printf("Enter first number:");
	scanf("%d",&fno);
	printf("Enter second number:");
	scanf("%d",&sno);
	ptr = &fno;
	qtr = &sno;
	sum = *ptr + *qtr;
	printf("\nSum of %d and %d is %d",fno,sno,sum);
	
}
