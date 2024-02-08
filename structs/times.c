#include <stdio.h>

struct time
{
   int h,m,s;
};

int totalseconds(struct time t)
{
   return  t.h * 3600 + t.m * 60 + t.s;
}

int equals(struct time t1, struct time t2)
{
  return  totalseconds(t1) == totalseconds(t2);
}

struct time max(struct time t1, struct time t2)
{
   if(totalseconds(t1) > totalseconds(t2))
        return t1;
   else
        return t2;
}

void print(struct time t)
{
    printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

void zero(struct time t)
{
    t.h = 0;
    t.m = 0;
    t.s = 0;
}

void zero2(struct time * p)
{
    p -> h = 0;
    p -> m = 0;
    p -> s = 0;
}

void main()
{
  struct time t1 = {5,20,30};
  struct time t2 = {1,2,3};
  struct time big;

      //big = max(t1, t2);
      //print(big);
      zero(t2); // pass by value
      print(t2);

      zero2(&t2); // pass by address
      print(t2);


}
