#include<stdio.h>

void main()
{
	FILE *p;
	char string1[20],filename[20];
	p = fopen("old.txt","w");
	printf("Enter yout name:");
	scanf("%s",string1);
	fprintf(p,"Name: %s",string1);
	fclose(p);
	
	printf("enter new file name:");
	scanf("%s",filename);
	rename("old.txt",filename);
	remove("old.txt");
}
