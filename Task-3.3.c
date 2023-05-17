#include<stdio.h>
#include<math.h>
void main()
 {
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    if(n==0){
    	printf("%d is Zero (0)",n);
	}else if(n>0)
	{
		printf("%d is Positive Number",n);
	}else
	{
		printf("%d is Negative Number",n);
	}
 }

