
//          *  
//        *   *  
//      *   *   *  
//    *   *   *   *  
//  *   *   *   *   *  
//    *   *   *   *  
//      *   *   *  
//        *   *  
//          *  
         
#include<stdio.h>
   void main()
   {
     int i,j,k,l,m,n=5,o;
      for(i=1;i<=n;i++)
        {
        for(j=1;j<=n-i;j++)
          {
           printf("  ");
          }
          for(k=1;k<=i;k++)
          {
            printf(" *  ");
          }
           printf("\n");
        }
         for(l=4;l>=1;l--)
        {
             for(m=1;m<=n-l;m++)
            {
            printf("  ");
            }
            for(o=1;o<=l;o++)
            {
                printf(" *  ");
            }
            printf("\n");
        }
    }