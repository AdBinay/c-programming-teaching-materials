#include<stdio.h>

int gcd(int a,int b)
{
	if(a==b)
		return a; // base case
	else if(a>b)
		return gcd(a-b,b);
	else
		return gcd(a,b-a);
}

int main()
{
	int n1,n2;
	printf("Enter two number:");
	scanf("%d%d",&n1,&n2);
	
	printf("\nGCD or HCF is %d",gcd(n1,n2));
	return 0;
}
