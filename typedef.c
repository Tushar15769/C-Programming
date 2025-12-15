#include<stdio.h>
void main()
{
  typedef int Array[5];
  Array x={10,20,30,40,50};
  int i;
  printf("Array elements are:");
  for(i=0;i<5;i++)
  {
    printf("%d\t",x[i]);
  }
}