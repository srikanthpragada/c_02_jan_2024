#include <stdio.h>


// Return index if found otherwise return -1
int search(int a[5], int v)
{
 int i;

   for(i = 0; i < 5; i ++)
   {
      if(a[i] == v)
         return i;
   }

   return -1;

}


void main()
{
    int arr[] = {1, 5, 9, 3, 4};

    printf("Found = %d\n",  search(arr,9));
    printf("Found = %d\n",  search(arr,8));
}



