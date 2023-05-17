#include<stdio.h>
#include<stdlib.h>

void main()
{
	struct student
	{
		int stdn;
		float mark;
		char name[10];
	};
	
	struct student s1[100];
	
	FILE *p;
	int i,n;
	p = fopen("student.txt","w");
	if(p==NULL)
	{
		printf("Error! creating file...");
		exit(0);
	}
	
	// taking user input
	printf("Enter nth Term:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter stdno,name and mark:");
		scanf("%d%s%f",&s1[i].stdn,s1[i].name,&s1[i].mark);
		fprintf(p,"\nStudent No.: %d\tName: %s\tMark: %.2f",s1[i].stdn,s1[i].name,s1[i].mark);
	}
	
	rewind(p);
	// printing the data
	for(i=0;i<n;i++)
	{
		fscanf(p,"\nStudent No.: %d\tName: %s\tMark: %.2f",&s1[i].stdn,s1[i].name,&s1[i].mark);
		printf("\nStudent No.: %d\tName: %s\tMark: %.2f",s1[i].stdn,s1[i].name,s1[i].mark);
	}
	fclose(p);
}
