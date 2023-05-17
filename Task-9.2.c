#include<stdio.h>
#include<string.h>
void main()
{
	struct record
	{
		char name[10];
		int roll;
		float mark;
	};
	
	struct record s[3];
	int i,j,temp;
	float temp1;
	char temp2[10];
	
	for(i=0;i<3;i++)
	{
		printf("\nEnter roll no., mark, name:");
		scanf("%d%f%s",&s[i].roll,&s[i].mark,s[i].name);
	}
	
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(s[i].mark<s[j].mark)
			{
				temp1 = s[i].mark;
				s[i].mark = s[j].mark;
				s[j].mark = s[j].mark;
				
				temp = s[i].roll;
				s[i].roll = s[j].roll;
				s[j].roll = temp;
				
				strcpy(temp2,s[i].name);
				strcpy(s[i].name,s[j].name);
				strcpy(s[j].name,temp2);
			}
		}
	}
	printf("\nPrinting Records According to Marks:\n");
	for(i=0;i<3;i++)
	{
		printf("Roll No.: %d \tMark: %.2f \tName: %s\n",s[i].roll,s[i].mark,s[i].name);
	}
}
