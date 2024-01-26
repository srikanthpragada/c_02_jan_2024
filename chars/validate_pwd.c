// print whether given input is valid password

#include <stdio.h>

void main()
{
  char ch;
  int i, digit = 0, upper = 0;

      printf("Enter 8 char :");
      for(i = 1; i <= 8; i ++)
      {
          ch = getch();
          putch('*');

          if(isdigit(ch))
               digit = 1;
          else
            if(isupper(ch))
               upper = 1;
      }

      if(digit && upper)
         printf("\nValid Password");
      else
      {
        if(!digit)
           printf("\nDigit is missing!");

        if(!upper)
           printf("\nUppercase is missing!");
      }

}
