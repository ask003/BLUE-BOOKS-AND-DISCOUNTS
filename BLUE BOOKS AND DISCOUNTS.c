
#include <stdio.h>

int main()
{
   int order;
   printf("ENTER THE REQUIRED NUMBER OF BLUE BOOKS: ");
   scanf("%d",&order);
   if(order<10000)
   {
       printf("NO DISCOUNT \n THE TOTAL COST IS %d ",order*10);
   }
   else
   if(order>10000 && order<15000)
   {
       int disc = order - (0.1*order);
        printf("Hey !! you got 10 percent discount !!! \n THE TOTAL COST IS  %d ",disc*10);
   }
   else
   if(order>15000 && order<20000)
   {
       int disc = order - (0.2*order);
        printf("Hey !! you got 10 percent discount !!! \n THE TOTAL COST IS %d ",disc*10);
   }

    return 0;
}
