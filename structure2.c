#include<stdio.h>
void printFun(int age,char name[20],char gen[10])
{
	printf("\nName: %s \tAge: %d \tGender: %s",name,age,gen);
}

struct person
{
	int age;
	char name[20];
	char gender[10];
};

void main()
{
	struct person p1;
	
	printf("\nEnter age,name,gender:");
	scanf("%d%s%s",&p1.age,p1.name,p1.gender);
	printFun(p1.age,p1.name,p1.gender);
}
