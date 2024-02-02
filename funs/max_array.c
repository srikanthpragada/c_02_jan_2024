#include <stdio.h>



int max(int a[5])
{
   int i, biggest = a[0];

     for(i = 2; i < 5; i ++)
     {
        if(a[i] > biggest)
            biggest = a[i];
     }

     return biggest;

}


void main()
{
    int arr[] = {1,5, 9, 3, 4};

    printf("Max = %d",  max(arr));
}



