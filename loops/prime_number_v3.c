// Program to print whether a number is prime

#include <stdio.h>

void main()
{
  int i, n, prime = 1;

    printf("Enter number :");
    scanf("%d",&n);

    for(i = 2; i <= n/2; i ++)
    {
        if(n % i == 0)  // found a factor
        {
            prime = 0;
            break;
        }
    }

    if(prime == 1)
         printf("Prime!");
    else
         printf("Not prime!");

}
