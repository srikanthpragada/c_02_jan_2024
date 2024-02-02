#include <stdio.h>

int add(int n1, int n2)
{
  return n1 + n2;
}

int max(int a, int b)
{
   return a > b ? a : b;
}


void main()
{
    int result;

    result = add(10,20);
    printf("Sum = %d\n", result);

    result = max(10,20);
    printf("Max = %d\n", result);

}



