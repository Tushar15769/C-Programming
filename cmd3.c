#include<stdio.h>
#include<direct.h>
int main(int argc,char*argv[])
{
  if(argc>2)
  {
    char*s1=argv[1];
    char*s2=argv[2];
    int x=atoi(s1);
    int y=atoi(s2);
    printf("Sum=%d\n",x+y);
  }
  else
  {
    printf("Insufficient input values"); 
  }
 return 0;
}