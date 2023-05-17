#include<stdio.h>
#include<math.h>
void main()
 {
    int n,ans;
    printf("Enter a number:");
    scanf("%d",&n);
    ans = pow(n,3);
    if(n<10){
    	printf("Cube of %d is %d",n,ans);
	}
 }

