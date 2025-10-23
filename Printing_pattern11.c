// 1   2   3   4   5  
//    2   3   4   5  
//      3   4   5  
//        4   5  
//          5  

#include<stdio.h>
void main()
{
    int i, j, k,n=5;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
        printf("  ");
        }
        for(k=1;k<=i;k++)
        {
        printf(" %d  ", j++);
        }
        printf("\n");
    }  
}
