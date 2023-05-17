#include<stdio.h>
#include<math.h>
void main()
 {
    int year;
    printf("Enter Years:");
    scanf("%d",&year);
    if(year%4==0){
    	printf("%d is Year Leap Year",year);
	}else
	{
		printf("%d is not Leap Year",year);
	}
 }

