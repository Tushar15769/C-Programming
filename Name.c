
// * * * * *   *       *   * * * * *   *       *   * * * * *   * * * * * 
//     *       *       *   *           *       *   *       *   *       *
//     *       *       *   * * * * *   * * * * *   * * * * *   * * * * *
//     *       *       *           *   *       *   *       *   *     *
//     *       * * * * *   * * * * *   *       *   *       *   *       *



#include<stdio.h>
void main()
{
  int i,j;
  int n=5;
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n;j++)
    {
      if(i==1 || j==3 )
      {
       printf("* ");
      }
      else{
        printf("  ");
      }
    }
   
  
  printf("  ");
  
     for(j=1;j<=n;j++)
    {
      if(j==1 || j==n || i==n)
      {
       printf("* ");
      }
      else{
        printf("  ");
      }
    }
    
  
  printf("  ");
 
     for(j=1;j<=n;j++)
    {
      if(i==1 || i==3 || i==n || j==1 && i==2 || j==n && i==4  )
      {
       printf("* ");
      }
      else{
        printf("  ");
      }
    }
   
  
  printf("  ");
  
     for(j=1;j<=n;j++)
    {
      if(j==1 || j==n || i==3 )
      {
       printf("* ");
      }
      else{
        printf("  ");
      }
    }
   
  
  printf("  ");
   
  
     for(j=1;j<=n;j++)
    {
      if(i==1 || j==1 || j==n || i==3 )
      {
       printf("* ");
      }
      else{
        printf("  ");
      }
    }
  
  
  printf("  ");
   
     for(j=1;j<=n;j++)
    {
      if(i==1 || j==1 || i==3 || j==n && i==2 || j==n-1 && i==4 || j==n && i==5)
      {
       printf("* ");
      }
      else{
        printf("  ");
      }
    }
    printf("\n");
  
 
  }
}
