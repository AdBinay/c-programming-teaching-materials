#include<stdio.h>

int fibo(int num)
{
	if(num==1 || num==2)
		return 1;   // base case
	else
		return (fibo(num-1)+fibo(num-2)); // general case
}

int main()
{
	int i,n;
	printf("Enter nth term:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",fibo(i));
	}
	
	return 0;
}
