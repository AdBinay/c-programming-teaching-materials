#include<stdio.h>
#define N 20
int n = 1;

void fun1()
{
	if(n<=N)
	{
		printf("%d\n",n);
		n++;
		fun2();
	}
	else
	{
		return;
	}
}

void fun2()
{
	if(n<=N)
	{
		printf("%d\n",n);
		n++;
		fun1();
	}else
	{
		return;
	}
}

int main()
{
	fun1();
	return 0;
}
