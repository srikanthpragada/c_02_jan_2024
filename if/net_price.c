// Take price and display net price after discount

#include <stdio.h>

void main()
{
  int price, discount, net_price;

    printf("Enter price  :");
    scanf("%d", &price);

    if(price > 10000)
    {
         discount = price * 0.20;
    }
    else
    {
         discount = price * 0.10;
    }


    net_price = price - discount;
    printf("Net Price: %6d",net_price);

}
