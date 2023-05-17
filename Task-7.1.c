#include<stdio.h>
#include<string.h>

void main()
{
	char string[100];
	int vCount=0, cCount=0, spaceCount=0, l,i;
	
	printf("Enter a string:");
	scanf("%s",string);
	l = strlen(string);
	strupr(string);
	for(i=0;i<l;i++)
	{
		if(string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U')
		{
			vCount++;
		}
		else
		{
			cCount++;
		}
	}
	
	printf("Entered String: %s\n",string);
	printf("Total Number of Vowels in the String: %d\n",vCount);
	printf("Total Number of Consonent in the String: %d\n",cCount);
}
