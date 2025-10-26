
//         1   
//       1   1   
//     1   2   1   
//   1   3   3   1   
// 1   4   6   4   1  


#include<stdio.h>
   void main()

   {
      int i,j,k,c,n;
      printf("Enter the value of n=");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
        for(k=1;k<n-i;k++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
           if(i==0 || j==0)
           c=1;
           else
           c=c*(i-j+1)/j;
           printf("%d   ",c);
        }
         printf("\n");
      }
   }
