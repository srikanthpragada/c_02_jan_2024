#include <stdio.h>

void main()
{
 int n;

    for(n = 50; n <= 60; n ++)
    {
      printf("\n%5d ->",n);
      factors(n);
    }

}

void factors(int num)
{
 int i;

   for(i = 2; i <= num/2; i ++)
   {
     if(num % i == 0)
          printf("%5d", i);
   }
}
