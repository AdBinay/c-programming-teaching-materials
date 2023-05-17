#include<stdio.h>

void main()
{
	char name[10];
	printf("Enter name:");
	gets(name);
	printf("Hello, %s",name);
	puts(name);
}
