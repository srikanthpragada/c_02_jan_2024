// Program to print largest factor of the given number

#include <stdio.h>

void main()
{
  int i, n;

    printf("Enter number :");
    scanf("%d",&n);

    for(i = n/2; i >= 1; i --)
    {
      if(n % i == 0)
      {
          printf("Largest factor : %d ", i);
          break;
      }
    }
}
