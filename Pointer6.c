#include<stdio.h>
#include<stdlib.h>
void main()
{
  int n, *arr;
  int i;
  printf("Enter the size:");
  scanf("%d",&n);

  arr=(int*)calloc(n,sizeof(int));

  for(i=0;i<n;i++)
{
    printf("\t%d", *(arr+i));
}
   free(arr);
}