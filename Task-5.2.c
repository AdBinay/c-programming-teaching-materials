#include <stdio.h>
#include <math.h>
void main()
{
    int binary, n, remainder, decimal = 0, i = 0;

    printf("Enter a binary number :");
    scanf("%d", &binary);

    n = binary;

    while (n > 0)
    {
        remainder = n % 10;
        decimal += remainder * pow(2, i++);
        n /= 10;
    }
    
    printf("Decimal equivalent of %d is %d", binary, decimal);
}
