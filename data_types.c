#include <stdio.h>
int main()
{
   // printf("hello");
   int c = 56;
   int b = 45;
   int k = b + c;
   int v = k * (-1);
   int r = c / b; // since r is  an integer  so r =  floor value of 56/45

   unsigned int g = -1;
   // printf("%d\n",k);
   // printf("%d\n", v);

   printf("%d %d %d \n", v, k, r);
   // printf("%u", g); 
   int i = __INT_MAX__;
   printf("%d", i+2); //this is called overflow , 


   long long int f = __LONG_LONG_MAX__ ;
   printf("%lld\n",f);

   float paragi = 60; 
   printf("%f\n           " , paragi) ;

   double paragiparagi = 12 ; 
   printf("%lf\n" , paragiparagi) ;




   return 0;

}