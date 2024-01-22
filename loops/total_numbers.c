// Program to take numbers until 0 is given and display total of numbers

#include <stdio.h>

void main()
{
  int n, sum = 0;

    while(1)
    {
        printf("Enter number [0 to stop]:");
        scanf("%d",&n);

        if(n == 0)
            break;  // terminate loop

        sum += n;
    }


    printf("Total = %d", sum);

}
