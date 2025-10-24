#include<stdio.h>
   void main()
   {
       int i,n,sum,limit;
       printf("Enter the limit=");
       scanf("%d",&limit);
       for(n=1;n<=limit;n++)
       {
        sum=0;
         for(i=1;i<n;i++)
       {
          if(n%i==0)
          {
          sum=sum+i;
          }
        }
         if(n==sum)
           printf("Perfect number %d \n",n);
         else
          printf("Not a perfect number\n");
       }
    }
         