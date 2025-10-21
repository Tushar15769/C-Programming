#include<stdio.h>
int main()
{
     int  i, n, sum;
     printf("Enter n value:");
     scanf("%d", &n);
     for(i=1;i<=n;i++)
     {
         sum=sum+i;
     }
         printf("Sum of first %d numbers is=%d",n,sum);
}
