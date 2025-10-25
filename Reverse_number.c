#include<stdio.h>

void main()
{
    int r,sum=0,n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    while(n>0)
    {
      r=n%10;
      sum=sum*10+r;
      n=n/10;
    }
    printf("Reverse of the number is %d",sum);
}