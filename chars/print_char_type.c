// print whether char is upper or not

#include <stdio.h>

void main()
{
  char ch;

      printf("Enter a char :");
      ch = getche();

      if(ch >= 65 && ch <= 90)
          printf("\nUppercase");
      else
          printf("\nOther char");
}
