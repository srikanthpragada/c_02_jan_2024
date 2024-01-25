// print whether char is upper or not

#include <stdio.h>

void main()
{
  char ch;
  int i, count = 0;


      printf("Enter 4 digit pin :");
      for(i = 1; i <= 4; i ++)
      {
          ch = getch();
          putch('*');
          if(ch >= 48 && ch <= 57)
             count++;
      }

      if(count == 4)
         printf("\nValid Pin");
      else
         printf("\nInvalid Pin");


}
