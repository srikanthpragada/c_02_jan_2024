// Fill 1 in diagonal and anti-diag and rest with 0

#include <stdio.h>

void main()
{
  int a[5][5];
  int i,j;

      for(i = 0; i < 5; i ++)
      {
        for(j = 0; j < 5; j ++)
        {
          if(i == j || i + j == 4)
             a[i][j] = 1;
          else
             a[i][j] = 0;

          printf("%5d", a[i][j]);
        }
        printf("\n");
      }

}
