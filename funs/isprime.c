#include <stdio.h>

int isprime(int n)
{
int i;

   for(i = 2; i <= n/2; i ++)
   {
       if (n % i == 0) // found factor
          return 0;   // not prime
   }

   return 1; // prime
}



void main()
{
    printf("%d ", isprime(10));
    printf("%d ", isprime(17));
}



