#include <stdio.h>

 main()
{
   // printf("Hello World");
   struct{int y ;} var={4}, *a=&var;
   
   printf("%d %d %d ", var.y, a->y, (*a).y);


   // return 0;
}
