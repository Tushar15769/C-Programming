#include<stdio.h>
   void main()
   {
     int i,sum,n;
     sum=0;
     n=1;
     while(n<=10)
     {
      sum+=n*n;
      n=n+1;
     }
     printf("Sum=%d",sum);
   }