#include<stdio.h>
struct person
{
	int age;
	char name[20];
	char gender[10];
};

void main()
{
	struct person p1;
	printf("Enter age,name,gender:");
	scanf("%d%s%s",&p1.age,p1.name,p1.gender);
	printf("\nName: %s",p1.name);
	printf("\nAge: %d",p1.age);
	printf("\nGender: %s",p1.gender);
	int size = sizeof(struct person);
	printf("\nSize of p1 is %d",size);
}
