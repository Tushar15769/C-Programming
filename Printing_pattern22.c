
//          *
//        *   *
//      *       *
//    *           *
//  *               *
//    *           *
//      *       *
//        *   *
//          *

#include<stdio.h>
   void main()
   {
     int i,j,k,l,n=5;
      for(i=1;i<=n;i++)
        {
           for(j=1;j<=n-i;j++)
           {
           printf("  ");
           }
           for(j=1;j<=2*i-1;j++)
           {
           if( j==2*i-1 || j==1)
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
             for(l=1;l<=k-1;l++)
             {
             printf("  ");
             }
             for(l=1;l<=2*(n-k)+1;l++)
             {
             if( l==2*(n-k)+1 || l==1)
             {
              printf(" *");
             }
             else
             printf("  ");
            }
             printf("\n");
            }
    }