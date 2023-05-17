#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	int age;
	char name[20];
	
	fp = fopen("testFile.txt","w");
	
	if(fp==NULL)
	{
		printf("Error, Opening File");
		exit(1);
	}
	
	printf("Enter your name and age:");
	scanf("%s%d",name,&age);
	
	fprintf(fp,"Name: %s \tAge: %d",name,age);
	fclose(fp);
}
