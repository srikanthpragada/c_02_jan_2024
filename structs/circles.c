#include <stdio.h>

struct circle
{
   int x,y; // center point
   int radius;
};


void main()
{
  struct circle circles[5];
  int i, area;

       srand(time(0));
       for(i = 0; i < 5; i ++)
       {
           circles[i].x = rand() % 100;
           circles[i].y = rand() % 100;
           circles[i].radius = rand() % 50;
       }


       for(i = 0; i < 5; i ++)
       {
          area = 3.14 * circles[i].radius * circles[i].radius;
          printf("%2d,%2d %2d %5d\n", circles[i].x, circles[i].y, circles[i].radius,
                   area);
       }

}
