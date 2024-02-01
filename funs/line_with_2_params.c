#include <stdio.h>

void main()
{
    line(25,'-'); // call function
    printf("\nSrikanth Technologies\n");
    line(25, '*');
}

void line(int len, char ch)
{
 int i;

   for(i = 1; i <= len; i ++)
     putch(ch);
}
