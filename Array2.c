#include<stdio.h>
    void main()
    {
       int a[50],n=3,i,loc,m;
       int b[3];
       printf("Enter the size:");
       scanf("%d",&m);
       printf("Enter the %d elements:",m);
       for(i=0;i<m;i++)
       {
         scanf("%d",&a[i]);
        }
        printf("Enter the location(0 to %d) to insert:",m);
        scanf("%d",&loc);
        printf("Enter the %d elements to insert:",n);
        for(i=0;i<n;i++)
        {
          scanf("%d",&b[i]);
        }
        for(i=m-1;i>=loc;i--)
        {
         a[i+n]=a[i];
        }
        for(i=0;i<n;i++)
        {
          a[loc+i]=b[i];
        }
        printf("Array after insertion:\n");
        for(i=0;i<m+n;i++)
        {
          printf(" %d",a[i]);  
        }
    }