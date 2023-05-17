#include<stdio.h>

void main()
{
	FILE *p;
	int ph;
	char name[20],add[10];
	p = fopen("staff.txt","r"); // reading file
	
	// retreving data from file
	fscanf(p,"Name: %s\tAddress: %s\tPhone Number: %d",name,add,&ph);
	
	// printing data
	printf("Name: %s\tAddress: %s\tPhone Number: %d",name,add,ph);
	
	fclose(p);
}
