#include <stdio.h>
int fact(int);
void main()
{
  int n, result;
  printf("Enter the number:");
  scanf("%d", &n);
  printf("Result is =%d", fact(n));
}

int fact(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * fact(n - 1);
  }
}
