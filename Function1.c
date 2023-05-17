#include<stdio.h>

void cal(int a,int b, int c)
{
	int l,s;
	if(a>b && a>c)
	{
		l=a;
		if(b>c)
		{
			s=c;
		}else
		{
			s=b;
		}
	}else if(b>c && b>a)
	{
		l=b;
		if(c>a)
		{
			s=a;
		}else
		{
			s=c;
		}
	}
	else
	{
		l=c;
		if(a>b)
		{
			s=b;
		}else
		{
			s=a;
		}
	}
	
	printf("largest is %d \nsmallest is %d",l,s);
}

int main()
{
	int a,b,c;
	
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	cal(a,b,c);
	
	return 0;
}
