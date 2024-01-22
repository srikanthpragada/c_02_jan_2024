// Program to print whether a number is perfect

#include <stdio.h>

void main()
{
  int i, n, sum = 0;

    printf("Enter number :");
    scanf("%d",&n);

    for(i = 1; i <= n/2; i ++)
    {
      if(n % i == 0)
          sum += i;
    }

    if(sum == n)
        printf("Perfect Number!");
    else
        printf("Not a perfect number!");
}
