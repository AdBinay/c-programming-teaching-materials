#include<stdio.h>

void main()
{
	int y,d,w;
	
	printf("Enter days:");
	scanf("%d",&d);
	
	y = (d/365);
	w = (d%365)/7;
	d = d - ((y*365)+(w*7));
	printf("Years: %d\n",y);
	printf("Weeks: %d\n",w);
	printf("Days: %d",d);
}
