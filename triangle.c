#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter two angles:");
	scanf("%d%d",&a,&b);
	c = 180-(a+b);
	printf("3rd side angle is %d",c);
	
}
