#include <stdio.h>
#include <math.h>
//=============
int main()
{
  int k1,k2,h;
   k1 = pow(2.6, 4 );
   printf("k = %d\n", k1);//45
   float x = pow(2.6, 4 );
   printf("x = %f\n", x);//45.697601
   h = 2.6;
   k2 = pow(h, 4 );
   printf("k = %d\n", k2);//16
   return 0;
}

