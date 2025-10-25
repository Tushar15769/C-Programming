#include<stdio.h>
   void main()
   {
       int i,n,sum=0,r,temp,Num;
       printf("Enter the value of n=");
       scanf("%d",&n);
       temp=n;
         while(n>0)
       {  
          r=n%10;;
          Num=r*r*r;
          sum=sum+Num;
          n=n/10;
        }
        n=temp;
        if(n==sum)
        printf("Armstrong number");
         else
        printf("Not a Armstrong number");
    }
         