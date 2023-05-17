#include<stdio.h>
struct Student
{
	int reg,class;
	char name[20],address[20];
	char sec;
};

void main()
{
	struct Student s1,s2;
	printf("\nEnter name,reg,class,sec,address:");
	scanf("%s%d%d%c%s",s1.name,&s1.reg,&s1.class,&s1.sec,&s1.address);
	printf("\nReg: %d",s1.reg);
	printf("\nName: %s",s1.name);
	printf("\nClass: %d",s1.class);
	printf("\nSec: %c",s1.sec);
	printf("\nAddress: %s",s1.address);
	
	printf("\nEnter name,reg,class,sec,address:");
	scanf("%s%d%d%c%s",s2.name,&s2.reg,&s2.class,&s2.sec,&s2.address);
	printf("\nReg: %d",s2.reg);
	printf("\nName: %s",s2.name);
	printf("\nClass: %d",s2.class);
	printf("\nSec: %c",s2.sec);
	printf("\nAddress: %s",s2.address);
}
