#include<stdio.h>
#include<string.h>

void main()
{
	// strcmp()
	char str1[10],str2[10];
	
	printf("Enter two strings:");
	scanf("%s%s",str1,str2);
	
	printf("Comparision Result is %d",strcmp(str1,str2));
}
