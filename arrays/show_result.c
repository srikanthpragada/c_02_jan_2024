// Create an array and fill it marks and display result

#include <stdio.h>

void main()
{
  int a[10] = {55,34,90,55,89,75,29,45,81,30};
  int i;

      for(i = 0; i < 10; i ++)
      {
          if(a[i] >= 50)
              printf("%2d - Pass\n", i + 1);
          else
              printf("%2d - Fail\n", i + 1);

      }

}
