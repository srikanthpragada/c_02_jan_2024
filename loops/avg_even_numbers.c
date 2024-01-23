// Program to take 10 numbers and display avg of  even numbers

#include <stdio.h>

void main()
{
  int i, n, sum = 0, count = 0;

    for(i = 1; i <= 10; i ++)
    {
        printf("Enter number :");
        scanf("%d",&n);

        if(n % 2 == 0)
        {
          sum += n;
          count ++;
        }
    }

    printf("Average = %d", sum/count);
}
