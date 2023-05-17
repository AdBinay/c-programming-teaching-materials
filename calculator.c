#include<stdio.h>
#include<ctype.h>
void main()
{
	int a,b;
	int choice;
	
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	
	printf("\n+. Add\n-. Subtract\n*. Multiply\n/. Divide\n%. Modulus\nq. Quit/Exit");
	printf("\nChoose 1 operation:(1-6)");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Addition result = %d",a+b);
				break;
		case 2: printf("Subtraction result = %d",a-b);
		        break;
		case 3: printf("Multiply result = %d",a*b);
		        break;
		case 4: printf("Divide result = %.2f",a/b);
				break;
		case 5: printf("Remainder result = %d",a%b);
		        break;
		case 6: printf("Quitting Program");
		        break;
		default: printf("Wrong Choice");
	}
}
