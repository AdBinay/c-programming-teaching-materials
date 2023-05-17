// practical of realloc()
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *ptr,i,n1,n2;
	
	printf("Enter size:");
	scanf("%d",&n1);
	
	ptr = (int*) malloc(n1*sizeof(int));
	for(i=0;i<n1;++i)
	{
		printf("%u\n",ptr+i);
	}
	
	printf("Enter new size:");
	scanf("%d",&n2);
	
	ptr = realloc(ptr,n2*sizeof(int));
	printf("Addresses of newly allocated memory:\n");
	for(i=0;i<n2;++i)
	{
		printf("%u\n",ptr+i);
	}
	
	free(ptr);
}
