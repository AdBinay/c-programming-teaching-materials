#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *p1,*p2,*p3;
	char ch, f1[20],f2[20],f3[20];
	
	printf("Enter 1st file name:");
	scanf("%s",f1);
	printf("Enter 2nd file name:");
	scanf("%s",f2);
	printf("Enter destination file name:");
	scanf("%s",f3);
	
	p1 = fopen(f1,"r");
	p2 = fopen(f2,"r");
	if(p1==NULL || p2==NULL)
	{
		printf("Error! opening file");
		exit(0);
	}
	
	p3 = fopen(f3,"w");
	if(p3==NULL)
	{
		printf("Error! opening file");
		exit(0);
	}
	
	while((ch=fgetc(p1))!=EOF)
	{
		fputc(ch,p3);
	}
	while((ch=fgetc(p2))!=EOF)
	{
		fputc(ch,p3);
	}
	
	printf("\nFile Merging Operation is Done!");
	fclose(p1);
	fclose(p2);
	fclose(p3);
}
