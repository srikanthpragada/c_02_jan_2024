// Take a char and print ascii code

#include <stdio.h>

void main()
{
  char ch;

     printf("Enter char :");
     //scanf("%c", &ch);
     ch = getchar();

     printf("For %c char the ASCII code is %d", ch, ch);

}
