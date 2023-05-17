#include<stdio.h>

void tower(int n, char src, char des, char tmp)
{
	if(n==1)
	{
		printf("\nDisk 1 Moved from tower %c to %c",src,des); // base case
		return;
	}
	tower(n-1,src,tmp,des);  // general case
	printf("\nDisk %d Moved from tower %c to %c",n,src,des);
	tower(n-1,tmp,des,src);
}

int main()
{
	int n;
	printf("Enter number of disks:");
	scanf("%d",&n);
	tower(n,'A','B','C');
	return 0;
}
