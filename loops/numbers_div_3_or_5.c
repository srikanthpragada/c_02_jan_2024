// Program to print numbers divisible by either 3 or 5

#include <stdio.h>

void main()
{
  int i;

    for(i = 100; i <= 200;  i++)
    {
      if(i % 3 == 0 || i % 7 == 0)
           printf("%d ", i);
    }

}
