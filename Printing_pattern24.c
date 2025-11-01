
//              1
//            2 1 2
//          3 2 1 2 3
//        4 3 2 1 2 3 4
//      5 4 3 2 1 2 3 4 5
//    6 5 4 3 2 1 2 3 4 5 6
//  7 6 5 4 3 2 1 2 3 4 5 6 7



#include<stdio.h>
  void main()
  {
    int i,j,k,n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=n-i;j++)
     {
      printf("  ");  
     }
      for(k=i;k>=1;k--)   
     {
      printf(" %d",k);
     }
     for(k=2;k<=i;k++)
     {
     printf(" %d",k);
     }
     printf("\n");
    }
  }