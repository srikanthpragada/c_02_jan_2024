// Program to print factors

#include <stdio.h>

void main()
{
  int i, n;

    printf("Enter number :");
    scanf("%d",&n);

    for(i = 1; i <= n/2; i ++)
    {
      if(n % i == 0)
          printf("%d ", i);
    }

    printf("%d ",n);
}
