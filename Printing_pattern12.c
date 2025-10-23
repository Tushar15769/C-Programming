
// 0  1  1  2  3  5  8 


#include<stdio.h>
int main()
{
     int i,a=0,b=1,c,n;
     printf("Enter the limit=");
     scanf("%d", &n);
     for(i=1;i<=n;i++)
     {
       printf(" %d ", a);
       c=a+b;
       a=b;
       b=c;
     }
    
}
