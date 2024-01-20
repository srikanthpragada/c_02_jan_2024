// Program to print number in reverse

#include <stdio.h>

void main()
{
  int i, n;

    printf("Enter number :");
    scanf("%d",&n);


    while(n > 0)
    {
        printf("%d", n % 10); // print right-most digit
        n = n / 10;           // remove right-most digit
    }

}
