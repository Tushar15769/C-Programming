#include <stdio.h>
void add(int m, int n);
void main()
{
  int m, n;
  printf("Enter values of m and n:");
  scanf("%d %d", &m, &n);
  add(m, n);
}

void add(int a, int b)
{
  int sum;
  sum = a + b;
  printf("Sum is %d", sum);
  return;
}