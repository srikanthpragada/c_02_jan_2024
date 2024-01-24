// Program to print common factors of two numbers

#include <stdio.h>

void main()
{
  int i, n1, n2, smallest;

    printf("Enter 2 numbers :");
    scanf("%d%d",&n1,&n2);

    smallest = n1 < n2 ? n1 : n2;

    for(i = 2; i <= smallest / 2; i ++)
    {
      if(n1 % i == 0 && n2 % i == 0)
          printf("%d ", i);
    }

}
