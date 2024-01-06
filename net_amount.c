// Take qty and price and display net amount after discount

#include <stdio.h>

void main()
{
  int qty, price, amount, discount, net_amount;

    // input
    printf("Enter quantity :");
    scanf("%d", &qty);

    printf("Enter price  :");
    scanf("%d", &price);

    // calculation
    amount = qty * price;
    discount = amount * 10 / 100;
    net_amount = amount - discount;

    // output
    printf("Amount     : %6d\n",amount);
    printf("- Discount : %6d\n",discount);
    printf("Net amount : %6d",net_amount);

}
