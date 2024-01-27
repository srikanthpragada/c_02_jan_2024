// Create an array and fill it numbers and then sort in descending order

#include <stdio.h>

void main()
{
  int a[10] = {4,3,9,8,1,2,9,4,5,7};
  int i, j, temp;

      for(i = 0; i < 9; i ++)
      {
         for(j = i + 1; j < 10; j ++)
         {
             if (a[i] > a[j])
             {
                 temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
             }
         }
      }

      for(i = 0; i < 10; i ++)
         printf("%5d", a[i]);
}
