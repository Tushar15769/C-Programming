
//  * * * * * * * * *
//    * * * * * * *
//      * * * * *
//        * * *
//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *

#include<stdio.h>
   void main()
   {
     int i,j,k,n=5,l,m,o;
      for(i=1;i<=n;i++)
        {
          for(j=1;j<=i-1;j++)
           {
           printf("  ");
           }
           for(k=1;k<=2*(n-i)+1;k++)
           {
           printf(" *");
           }
           printf("\n");
        }
         for(l=2;l<=n;l++)
        {
           for(m=1;m<=n-l;m++)
           {
           printf("  ");
           }
           for(o=1;o<=2*l-1;o++)
           {
           printf(" *");
           }
         printf("\n");
        }
    }