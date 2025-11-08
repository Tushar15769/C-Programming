#include<stdio.h>
    void main()
    {
       int arr[50],n,i,key,loc;
       printf("Enter the size:");
       scanf("%d",&n);
       printf("Enter the %d elements:",n);
       for(i=0;i<n;i++)
       {
         scanf("%d",&arr[i]);
        }
        printf("Enter element to insert:");
        scanf("%d",&key);
        printf("Enter the location to insert:");
        scanf("%d",&loc);
        for(i=n-1;i>=loc;i--)
        {
         arr[i+1]=arr[i];
        }
        arr[loc]=key;
        printf("Array after insertion:\n");
        for(i=0;i<=n;i++)
        {
          printf(" %d",arr[i]);  
        }
    }