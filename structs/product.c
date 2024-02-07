#include <stdio.h>

struct product
{
   // members
   char name[20];
   int price, qoh;
};


void main()
{
 struct product p1;
 struct product p2 = {"Air Pods", 30000, 5};

     strcpy(p1.name, "iPhone 15");
     p1.price = 100000;
     p1.qoh = 10;

     printf("%-20s  %6d %3d\n", p1.name, p1.price, p1.qoh);
     printf("%-20s  %6d %3d\n", p2.name, p2.price, p2.qoh);
}
