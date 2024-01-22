// Program to print avg of given number of numbers

#include <stdio.h>

void main()
{
  int i, n, sum = 0, count;

    printf("Enter no. of numbers :");
    scanf("%d", &count);

    for(i = 1; i <= count; i ++)
    {
        printf("Enter number :");
        scanf("%d",&n);

        sum += n;
    }


    printf("Average = %d", sum / count);

}
