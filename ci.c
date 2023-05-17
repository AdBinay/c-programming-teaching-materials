#include<stdio.h>
#include<math.h>

void main()
{
	int t;
	float p,r,ci;
	
	printf("Enter principle, Rate and Time:");
	scanf("%f%f%d",&p,&r,&t);
	
	ci = p * pow((1+r/100),t);
	printf("\nCompound Interest of Rs %.2f for %d years at %.2f per annum is Rs %.2f",p,t,r,ci);
	
}
