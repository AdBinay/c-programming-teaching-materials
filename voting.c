#include<stdio.h>

void main()
{
	int age;
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age>=18){
		printf("You are eligible to vote");
	}
	else
	{
		printf("You are not eligible to vote");
	}
}
