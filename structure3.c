#include<stdio.h>

struct person
{
	int age;
	char name[20];
};

void main()
{
	struct person p1, *personPtr;
	personPtr = &p1;
	
	printf("Enter name and age:");
	scanf("%s%d",p1.name,&p1.age);
	
	printf("\nName: %s \tAge: %d",personPtr->name,personPtr->age);
}
