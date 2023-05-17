#include<stdio.h>
#include<ctype.h>

void main()
{
	char i;
	
	printf("Enter a char:");
	scanf("%c",&i);
	
	printf("%c in Lowercase = %c",i,tolower(i));
}
