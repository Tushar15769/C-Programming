
//          *
//        *   *
//      *       *
//    *           *
//  * * * * * * * * *
 

#include<stdio.h>
   void main()
   {
     int i,j,k,n=5;
      for(i=1;i<=n;i++)
        {
           for(j=1;j<=n-i;j++)
           {
           printf("  ");
           }
           for(j=1;j<=2*i-1;j++)
           {
           if(i==n || j==2*i-1 || j==1)
           {
            printf(" *");
           }
           else
           printf("  ");
          }
           printf("\n");
        }
    }