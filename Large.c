#include<stdio.h>
   void main()
   {  
     int i,large;
     int arr[7]={7,13,21,16,9,31,24};
     large=arr[0];
     for(i=1;i<7;i++)
     {
       if(arr[i]>large)
        {
          large=arr[i];
        }
     }
     printf("large=%d\n",large);
    }