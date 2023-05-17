#include<stdio.h>
#include<math.h>

void main()
{
	float a,b,c,d,r1,r2;
	printf("Enter value of a,b,c in quardatic equation:");
	scanf("%f%f%f",&a,&b,&c);
	d = (b*b) - 4*a*c;
	if(d==0)
	{
		r1 = -b / 2*a;
		r2 = r1;
		printf("\nThe Roots are real and equal.");
		printf("\nThe Roots are %.2f and %.2f",r1,r2);
	}
	else if(d>0)
	{
		r1 = - (b+sqrt(b)) / (2*a);
		r2 = - (b-sqrt(b)) / (2*a);
		printf("\nThe Roots are real and distinct.");
		printf("\nThe Roots are %.2f and %.2f",r1,r2);
	}
	else
	{
		printf("\nThe Roots are Complex and Imaginary");
	}
}
