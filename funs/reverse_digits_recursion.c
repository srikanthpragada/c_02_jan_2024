#include <stdio.h>

void reverse(int n)
{
    if(n > 0)
    {
       printf("%d", n % 10);
       reverse(n / 10);
    }

}

void main()
{
   reverse(123);
}


