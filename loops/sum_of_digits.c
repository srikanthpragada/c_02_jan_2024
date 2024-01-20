// Program to print sum of digits

#include <stdio.h>

void main()
{
  int n, digit, sum = 0;

    printf("Enter number :");
    scanf("%d",&n);


    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;           // remove right-most digit
    }

    printf("Sum = %d", sum);
}
