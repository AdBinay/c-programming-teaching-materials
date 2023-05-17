#include<stdio.h>
void main()
{
       int n;
       
       printf("Choose Number (1-7):");
       scanf("%d",&n);
       
       switch(n)
       {
       	case 1: printf("Sunday"); break;
       	case 2: printf("Monday"); break;
       	case 3: printf("Tueday"); break;
       	case 4: printf("Wednesday"); break;
       	case 5: printf("Thursday"); break;
       	case 6: printf("Friday"); break;
       	case 7: printf("Saturday"); break;
       	default: printf("Wrong Choice");
	   }
}
