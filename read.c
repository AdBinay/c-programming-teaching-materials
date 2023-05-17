#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	int age;
	char name[20];
	
	if((fp=fopen("testFile.txt","r"))==NULL)
	{
		printf("Error in opening file");
		exit(1);
	}
	
	fscanf(fp,"Name: %s\tAge: %d",name,&age);
	printf("Name: %s \tAge: %d",name,age);
	fclose(fp);
}
