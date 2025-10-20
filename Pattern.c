// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

#include<stdio.h>
int main()
{
    int i, j, n=5;
    for(i=n; i>=0; i--)
    {
        for( j=n-i;j>=0 ; j--)
        {
            printf("%d", n-i+1);
        }
        printf("\n");
    }
}  