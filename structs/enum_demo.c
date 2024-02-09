#include <stdio.h>

enum boolean {FALSE , TRUE};
enum transport {TRAIN = 1, BUS = 2, FLIGHT = 3};

enum paymentmode {CASH, NEFT, UPI};

struct payment  {
   char customer[30];
   int amount;
   enum paymentmode mode;
};

void main()
{
  enum boolean done = FALSE;
  enum transport mode = FLIGHT;
  struct payment p1 = {"Andy", 10000, UPI};

      //done = TRUE;


      printf("%d", done);

      if (mode == FLIGHT)
          printf("Costly");
      else
        if(mode == TRAIN)
            printf("Cheap");

}
