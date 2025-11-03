
//        *      
//      * *      
//    *   *      
//        *      
//        *      
//        *      
//  * * * * * * * 
 

#include<stdio.h>
   void main()
   {
     int i,j,n=7;
      for(i=1;i<=n;i++)
        {
           for(j=1;j<=n;j++)
           {
           if(i==n || j==n-3 || i==n-5 && j==n-4 || i==n-4 && j==n-5)
           {
            printf(" *");
           }
           else
           printf("  ");
          }
           printf("\n");
        }
    }