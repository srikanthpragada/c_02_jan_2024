// Program to print whether a number is prime

#include <stdio.h>

void main()
{
  int i, n;

    printf("Enter number :");
    scanf("%d",&n);

    for(i = 2; i <= n/2; i ++)
    {
      if(n % i == 0)  // found a factor
          break;
    }

    if(i > n/2)
         printf("Prime!");
    else
         printf("Not prime!");

}
