#include<stdio.h>
   void main()
   {
       int i,n,sum,r,temp,fact,limit;
       printf("Enter the limit=");
       scanf("%d",&limit);
       for(n=1;n<=limit;n++)
       {  
          temp=n;
          sum=0;
          while(n>0)
         {  
           r=n%10;
           fact=1;
           for(i=r;i>=1;i--)
           {
            fact=fact*i;
           }
           sum=sum+fact;
           n=n/10;
         }
           n=temp;
           if(n==sum)
           printf("%d is a Strong number\n",n);
           else
           printf("Not a strong number\n");
        }
    }
         