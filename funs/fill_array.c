#include <stdio.h>

void fill_array(int a[], int len,  int value)
{
   int i;

     for(i = 0; i < len; i ++)
     {
        a[i] = value;
     }
}


void main()
{
    int arr[5], marks[10], i;

     fill_array(arr,5,1);
     fill_array(marks,10,0);

     for(i = 0; i < 10; i ++)
     {
         printf("%5d", marks[i]);
     }
}



