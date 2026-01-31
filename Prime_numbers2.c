#include <stdio.h>
int main()
{
  int i = 1, count = 0, num;
  printf("Enter the number:");
  scanf("%d", &num);

  if (num <= 1)
  {
    printf("%d is not a prime number", num);
  }
  while (i <= num)
  {
    if (num % i == 0)
    {
      count++;
    }
    i++;
  }
  if (count == 2)
  {
    printf("%d is a prime number", num);
  }
  else
    printf("%d is not a prime number", num);

  return 0;
}