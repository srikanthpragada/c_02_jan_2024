#include <stdio.h>

// pass by value
void zero(int a, int b)
{
   a = b = 0;
}

void main()
{
  int n1 = 10, n2 = 20;

    zero(n1, n2);
    printf("n1 = %d, n2 = %d",n1,n2);
}



