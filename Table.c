#include<stdio.h>
void main()
{
  int num,i,n=10;
  printf("Enter the number=");
  scanf("%d",&num);
  for(i=1;i<=n;i++)
  {
  printf("%dx%d=%d\n",num,i,num*i);
  }
}