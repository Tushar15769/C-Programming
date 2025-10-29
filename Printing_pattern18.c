
// * * * * * * *
//   *        *
//      *   *
//        *
       
#include<stdio.h>
   void main()
   {
     int i,j,n=5;
      for(i=1;i<=n;i++)
        {
           for(j=1;j<=i-1;j++)
           {
           printf("  ");
           }
           for(j=1;j<=2*(n-i)-1;j++)
           {
           if(i==1 || j==2*(n-i)-1 || j==1)
           {
            printf(" *");
           }
           else
           printf("  ");
           }
           printf("\n");
        }
    }