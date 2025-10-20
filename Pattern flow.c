#include<stdio.h>
int main()
{
    int i, j, n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
    printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for(i=n;i>0;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for(i=n;i>0;i--)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=n-i+1;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}