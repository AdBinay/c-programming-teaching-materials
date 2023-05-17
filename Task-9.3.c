#include<stdio.h>
#include<math.h>

float sInterest(float p,float t,float r)
{
	float si;
	si = (p*t*r)/100;
	return si;
}

float cInterest(float p,float t,float r)
{
	float temp;
	temp = (1+(r/100));
	temp = pow(temp,t);
	temp = p*temp;
	return temp;
}

struct interest
{
	float p,t,r;
};

void main()
{
	struct interest si,ci;
	
	printf("Enter principle, rate, time:");
	scanf("%f%f%f",&si.p,&si.r,&si.t);
	ci.p = si.p;
	ci.r = si.r;
	ci.t = si.t;
	
	printf("\nSimple Interest is %.2f",sInterest(si.p,si.t,si.r));
	printf("\nCompound Interest is %.2f",cInterest(ci.p,ci.t,ci.r));
}
