#include<stdio.h>

void main()
{
	int a,b,c,greater,middle,small;
	
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		greater = a;
		if(b>c)
		{
			middle = b;
			small = c;
		}
		else
		{
			middle = c;
			small = b;
		}
	}else if(b>a && b>c)
	{
		greater = b;
		if(c>a)
		{
			middle = c;
			small = a;
		}
		else
		{
			middle = a;
			small = c;
		}
	}
	else
	{
		greater = c;
		if(a>b)
		{
			middle = a;
			small = b;
		}
		else
		{
			middle = b;
			small = a;
		}
	}
	printf("Greater number is %d\n",greater);
	printf("Middle number is %d\n",middle);
	printf("Small number is %d",small);
}
