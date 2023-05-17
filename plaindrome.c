#include<stdio.h>

void main()
{
	int n,i,rem,reverse,temp;
	printf("Enter number:");
	scanf("%d",&n);
	temp = n;
	while(n!=0)
	{
		rem = n%10;
		reverse = reverse * 10 + rem;
		n = n/10;
	}
	if(temp==reverse)
	{
		printf("%d is Plaindrome",temp);
	}
	else
	{
		printf("%d is not plaindrome",temp);
	}
}
