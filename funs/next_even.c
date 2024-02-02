#include <stdio.h>

int nexteven(int n)
{
   if(n % 2 == 0)
     return n + 2;
   else
     return n + 1;
}


int next_even(int n)
{
   if(n % 2 == 0)
     n += 2;
   else
     n ++;

   return n;
}


void main()
{
    printf("%d ", next_even(10));
    printf("%d ", next_even(15));
}



