#include<stdio.h>
void main()
{
       int a,b,c,d;
       printf("Enter the Four Numbers :");
       scanf("%d %d %d %d",&a,&b,&c,&d);
       if(a>b && a>c && a>d){
       	printf("Largest is %d",a);
	   }else if(b>c && b>d){
	   	printf("Largest is %d",b);
	   }else if(c>d){
	   	printf("Largest is %d",c);
	   }else{
	   	printf("Largest is %d",d);
	   }
}
