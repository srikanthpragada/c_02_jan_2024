// print whether char is upper or not

#include <stdio.h>

void main()
{
  char ch;
  int i, count = 0;


      printf("Enter 10 chars :");
      for(i = 1; i <= 10; i ++)
      {
          ch = getche();
          if(ch >= 48 && ch <= 57)
             count++;
      }

      printf("\nCount of digits : %d", count);


}
