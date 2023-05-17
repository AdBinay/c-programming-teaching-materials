#include<stdio.h>

void main()
{
	float subject[5],total=0,average;
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter mark:");
		scanf("%f",&subject[i]);
		total = total + subject[i];
	}
	average = total/5;
	printf("Total Mark: %.2f",total);
	printf("Average Mark: %.2f",average);
}
