#include<stdio.h>
int main()
{
    int i, n, fact=1;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
     fact=fact*i;
    }
     printf("Factorial of the given number is = %d",fact);
    return 0;
}
