#include<stdio.h>
#include<stdlib.h>
FILE *p;

struct employee
{
	int id,age;
	char name[20],add[20];
	float sal;
}e;

int main()
{
	int ch,i;
	do{
		printf("\n1. Write \n2. Read \n3. Append \n4. Exit\n");
		printf("Enter your Choice>");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: p = fopen("file1.txt","w");
					while(ch!=0)
					{
						printf("Enter id,name,add,age,sal:");
						scanf("%d%s%s%d%f",&e[].id,e.name,e.add,&e.age,&e.sal);
						fprintf(p,"EMP ID: %d\tName: %s\tAddress: %s\tAge: %d\tSalary: %.2f",e.id,e.name,e.add,e.age,e.sal);	
				    	printf("Do you want to Continue?(1/0)->");
				    	scanf("%d",&ch);
				    	fclose(p);
					}
					break;
			
			case 2: p = fopen("file1.txt","r");
					printf("\n______________________________________________________________________\n");
					printf("\t\t\tEMPLOYEE DATA");
					printf("\n______________________________________________________________________\n");
					for(i=0;i<2;i++)
					{
						fscanf(p,"EMP ID: %d\tName: %s\tAddress: %s\tAge: %d\tSalary: %.2f",&e.id,e.name,e.add,&e.age,&e.sal);
						printf("\nEMP ID: %d\tName: %s\tAddress: %s\tAge: %d\tSalary: %.2f\n",e.id,e.name,e.add,e.age,e.sal);
					}
					fclose(p);
					
			case 3: p = fopen("file1.txt","w");
					printf("Enter id,name,add,age,sal:");
					scanf("%d%s%s%d%f",&e.id,e.name,e.add,&e.age,&e.sal);
					fprintf(p,"EMP ID: %d\tName: %s\tAddress: %s\tAge: %d\tSalary: %.2f",e.id,e.name,e.add,e.age,e.sal);	
				    fclose(p);
					break;
			
			case 4: printf("\nQutting......");
					exit(0);
					
			default: printf("\nProgramming Quiting.....");
					 exit(0); 	
		}
	}while(ch!=4);
	
	return 0;
}
