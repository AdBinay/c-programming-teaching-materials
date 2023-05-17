#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *p1,*p2;
	char ch, fname1[20],fname2[20];
	
	printf("Enter Source File:");
	scanf("%s",fname1);
	
	p1 = fopen(fname1,"r");
	if(p1==NULL)
	{
		printf("Error! opening file");
		exit(0);
	}
	
	printf("Enter new file name:");
	scanf("%s",fname2);
	p2 = fopen(fname2,"w");
	if(p2==NULL)
	{
		printf("Error! Opening file");
		exit(0);
	}
	
	while(1)
	{
		ch=fgetc(p1);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch,p2);
		}
	}
	
	printf("\nFile %s is copied successfullt in the file %s",fname1,fname2);
	fclose(p1);
	fclose(p2);
}
