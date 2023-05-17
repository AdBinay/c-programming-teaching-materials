#include<stdio.h>

void main()
{
	FILE *p;
	int ctr = 0;
	char c;
	
	p = fopen("temp.txt","r");
	for(c=getc(p);c!=EOF;c=getc(p))
	{
		if(c=='\n')
		{
			ctr++;
		}
	}
	fclose(p);
	printf("\nTotal lines are: %d",ctr);
}
