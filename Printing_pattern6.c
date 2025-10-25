

    //            1
    //          2 2 2
    //        3 3 3 3 3
    //      4 4 4 4 4 4 4    
    //    5 5 5 5 5 5 5 5 5
    //  6 6 6 6 6 6 6 6 6 6 6


    
#include<stdio.h>
void main()
{
     int i, j, k, n,c=80;
     printf("Enter the value of n=");
     scanf("%d",&n);
        for(i=1; i<=n; i++)
    {
        for(j=1; j<=c/2-i; j++)
        {
            printf("  ");
        }
        for(k=1; k<=2*i-1; k++)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
}
