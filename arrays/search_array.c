//Linear Search

#include <stdio.h>

void main()
{
  int a[10] = {55,34,90,55,89,75,29,45,81,30};
  int i, sn, found = 0;


      printf("Enter number :");
      scanf("%d",&sn);

      for(i = 0; i < 10; i ++)
      {
         if(a[i] == sn)
         {
             printf("Found at %d", i);
             found = 1;
             break;
         }
      }

      if(!found)
         printf("Not found!");

}
