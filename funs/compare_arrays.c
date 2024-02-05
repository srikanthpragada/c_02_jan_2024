#include <stdio.h>


int compare(int a1[5], int a2[5])
{
 int i;

    for(i = 0; i < 5; i ++)
    {
       if (a1[i] != a2[i])
           return 0; // false
    }

    return 1; // true
}

void main()
{
    int a[] = {1,2,3,3,5};
    int b[] = {1,2,3,5,4};

    printf("Result = %d",  compare(a,b));
}



