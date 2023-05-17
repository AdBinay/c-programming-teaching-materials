#include<stdio.h>
#include<string.h>

void main()
{
	char string[20], temp[20];
	
	printf("Enter a string:");
	scanf("%s",string);
	strcpy(temp,string);
	strrev(temp);	
	if(strcmp(temp,string)==0)
	{
		printf("\nThe Reversed String is %s\n",temp);
		printf("%s is Plaindrome",string);
	}else
	{
		printf("\nThe Reversed String is %s",temp);
		printf("\n%s is Not Plaindrome",string);
	}
}
