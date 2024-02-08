#include <stdio.h>


void copy(int a1[5], int a2[5])
{
 int i;

    for(i = 0; i < 5; i ++)
    {
        a1[i] = a2[i];
    }

}

void main()
{
    int a[] = {1,2,3,3,5};
    int b[] = {10,20,30,50,40};

    copy(a,b);
}



