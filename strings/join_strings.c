// Take 5 names and concatenate them

#include <stdio.h>

void main()
{
  char name[30], names[200]= "";

  int i;

      for(i = 1;  i <= 5 ; i ++)
      {
         printf("Enter name :");
         gets(name);

         strcat(names, name);
      }

      puts(names);

}
