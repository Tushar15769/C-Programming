
//  * * * * * * * * *
//    *           *
//      *       *
//        *   *
//          *
//        *   *
//      *       *
//    *           *
//  * * * * * * * * *
 


#include<stdio.h>
   void main()
   {
     int i,j,k,l,n=5;
      for(i=1;i<=n;i++)
        {
           for(j=1;j<=i-1;j++)
           {
           printf("  ");
           }
           for(j=1;j<=2*(n-i)+1;j++)
           {
           if(i==1 || j==2*(n-i)+1 || j==1)
           {
            printf(" *");
           }
           else
           printf("  ");
           }
           printf("\n");
        }
           for(k=2;k<=n;k++)
         {
           for(l=1;l<=n-k;l++)
           {
           printf("  ");
           }
           for(l=1;l<=2*k-1;l++)
           {
           if(k==n || l==2*k-1 || l==1)
           {
            printf(" *");
           }
           else
           printf("  ");
           }
           printf("\n");
          }
    }