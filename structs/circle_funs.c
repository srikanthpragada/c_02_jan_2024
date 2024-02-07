#include <stdio.h>

struct circle
{
   int x,y; // center point
   int radius;
};

void print(struct circle c)
{
  printf("%d,%d %d\n", c.x,c.y, c.radius);
}

int area(struct circle c)
{
   return 3.14 * c.radius * c.radius;
}


void main()
{
  struct circle c1 = {10,20,15};

     print(c1); // pass struct circle
}
