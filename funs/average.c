#include <stdio.h>

// Function Declaration or Prototype declaration
float average(int, int);

void main()
{
    printf("Average = %f",  average(10,15));
}

// Function definition
float average(int a, int b)
{
   return (a + b) / 2.0;
}

