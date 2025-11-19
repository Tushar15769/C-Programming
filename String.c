#include<stdio.h>
#include<string.h>
   void main()
   {
      int i;
      char S1[15]="Hello";
      char S2[]="World";

      int l1=strlen(S1);
      int l2=strlen(S2);

      l1=strlen(S1);
      l2=strlen(S2);
      for(i=0;i<=l2;i++)
      {
         S1[l1+i]=S2[i];
      }
      printf("%s\n",S1);
   }